#include "../include/websocket.hpp"
#include "../include/calculate.hpp"
#include "../include/packet.hpp"
#include <thread>
#include <mutex>

int main() {

    // OrderBookSnapshot currentSnapshot;
    // std::cout << "Start..." << std::endl;
    // std::thread receiverThread(websocket);
    // std::cout << "Computing..." << std::endl;
    // std::thread computeThread(calculate1, currentSnapshot.asks);
    // //websocket();

    // receiverThread.join();
    // computeThread.join();
    // return 0;

    readConfig();
    OrderBookSnapshot currentSnapshot;
    std::mutex snapshot_mutex;

    std::cout << "Start..." << std::endl;

    std::thread receiverThread([&]() {
        websocket(currentSnapshot, snapshot_mutex);
    });

    std::cout << "Computing..." << std::endl;

    std::thread computeThread([&]() {
        while (true) {
            OrderBookSnapshot copy;
            {
                std::lock_guard<std::mutex> lock(snapshot_mutex);
                copy = currentSnapshot;
            }

            if (!copy.asks.empty()) {
                auto [pred_price, slippage] = calculate1(copy.asks);
                std::cout << "Expected Slippage: " << slippage << std::endl;
            }

            std::this_thread::sleep_for(std::chrono::milliseconds(80));
        }
    });

    receiverThread.join();
    computeThread.join();

    return 0;
}
