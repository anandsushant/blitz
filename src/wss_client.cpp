#include "../include/websocket.hpp"

typedef websocketpp::client<websocketpp::config::asio_tls_client> client;
typedef websocketpp::lib::shared_ptr<boost::asio::ssl::context> context_ptr;

context_ptr on_tls_init(websocketpp::connection_hdl) {
    context_ptr ctx(new boost::asio::ssl::context(boost::asio::ssl::context::tlsv12));
    ctx->set_options(boost::asio::ssl::context::default_workarounds |
                     boost::asio::ssl::context::no_sslv2 |
                     boost::asio::ssl::context::single_dh_use);
    return ctx;
}

// void on_message(websocketpp::connection_hdl, client::message_ptr msg) {
//     std::cout << "Received" << std::endl;
//     parse_orderbook(msg->get_payload());
//     return;
// }

// void on_message(client* c, websocketpp::connection_hdl hdl, client::message_ptr msg, OrderBookSnapshot* snapshot, std::mutex* mtx) {
//     OrderBookSnapshot temp = parse_orderbook(msg->get_payload());

//     {
//         std::lock_guard<std::mutex> lock(*mtx);
//         *snapshot = std::move(temp);
//     }

//     std::cout << "Received" << std::endl;
// }

void websocket(OrderBookSnapshot& snapshot, std::mutex& mtx) {

    client cli;

    try {
        cli.clear_access_channels(websocketpp::log::alevel::frame_payload);
        cli.set_access_channels(websocketpp::log::alevel::none);

        cli.init_asio();
        cli.set_tls_init_handler(on_tls_init);
        // cli.set_message_handler(&on_message);

        cli.set_message_handler(
            [&snapshot, &mtx](websocketpp::connection_hdl hdl, client::message_ptr msg) {
                OrderBookSnapshot temp = parse_orderbook(msg->get_payload());
                std::lock_guard<std::mutex> lock(mtx);
                snapshot = std::move(temp);
                std::cout << "Received" << std::endl;
            }
        );

        websocketpp::lib::error_code ec;
        std::string uri = "API_URI_ENDPOINT";

        client::connection_ptr con = cli.get_connection(uri, ec);
        if (ec) {
            std::cout << "Connection failed: " << ec.message() << std::endl;
            return;
        }

        cli.connect(con);
        cli.run();  // Will block here and wait for messages

    } catch (std::exception& err) {
        std::cout << "Exception: " << err.what() << std::endl;
    }

    return;
}
