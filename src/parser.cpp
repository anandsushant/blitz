#include "../include/packet.hpp"

// OrderBookSnapshot currentSnapshot;
// std::mutex mute;

// void print_Snapshot(OrderBookSnapshot snapshot) {
    
//     std::cout << "[" << "Exchange: " << snapshot.exchange << "]";
//     std::cout << "[" << "Symbol: " << snapshot.symbol << "]";
//     std::cout << "[" << "Timestamp: " << snapshot.timestamp << "]";
//     std::cout << std::endl;
//     std::cout << "[Asks: ";
//     for (auto ask : snapshot.asks) {
//         std::cout << "[" << ask.price << ", " << ask.quantity << "] ";
//     }
//     std::cout << "]";
//     std::cout << std::endl;
//     std::cout << "[Bids: ";
//     for (auto bid : snapshot.bids) {
//         std::cout << "[" << bid.price << ", " << bid.quantity << "] ";
//     }
//     std::cout << "]";
//     std::cout << std::endl;
//     return;
// }


OrderBookSnapshot parse_orderbook(const std::string& raw_json) {
    using json = nlohmann::json;
    OrderBookSnapshot temp_snapshot;
    json j = json::parse(raw_json);

    temp_snapshot.exchange = j["exchange"];
    temp_snapshot.symbol = j["symbol"];
    temp_snapshot.timestamp = j["timestamp"];

    for (const auto& ask : j["asks"]) {
        temp_snapshot.asks.push_back(Order{
            std::stod(ask[0].get<std::string>()),
            std::stod(ask[1].get<std::string>())
        });
    }

    for (const auto& bid : j["bids"]) {
        temp_snapshot.bids.push_back(Order{
            std::stod(bid[0].get<std::string>()),
            std::stod(bid[1].get<std::string>())
        });
    }
    // std::cout << "Parser is working......" << std::endl;
    // print_Snapshot(snapshot);
    // return;
    // currentSnapshot = temp_snapshot;
    return temp_snapshot;
}