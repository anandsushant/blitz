#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include <nlohmann/json.hpp>

struct Order {
    double price;
    double quantity;
};

struct OrderBookSnapshot {
    std::string exchange;
    std::string symbol;
    std::string timestamp;
    std::vector<Order> asks;
    std::vector<Order> bids;
};

extern OrderBookSnapshot currentSnapshot; // keeps the latest orderbook data
OrderBookSnapshot parse_orderbook(const std::string& raw_json);

extern std::string exchange;
extern std::string order_type;
extern std::string symbol;

extern std::string fee_tier;
extern std::pair<double, double> fees;
extern double maker_fee, taker_fee;

extern double quantity;
extern double volatility;

extern std::unordered_map<std::string, std::string> param;

void readConfig();


// void print_Snapshot(OrderBookSnapshot snapshot);

