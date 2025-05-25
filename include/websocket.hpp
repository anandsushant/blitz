#ifndef WEBSOCKET_HPP
#define WEBSOCKET_HPP

#include <websocketpp/config/asio_client.hpp>
#include <websocketpp/client.hpp>
#include "../include/packet.hpp"

#include <iostream>
#include <string>

void websocket(OrderBookSnapshot& snapshot, std::mutex& mtx);

#endif
