#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>

#include "../include/packet.hpp"

std::string exchange;
std::string order_type;
std::string symbol;
std::string fee_tier;

double quantity;
double volatility;

std::unordered_map<std::string, std::string> param;

// std::unordered_map<std::string, std::string> readConfig() {
void readConfig() {
    const std::string& filename = "../config/env.cfg";

    // storing the input parameters in an unordered_map
    // std::unordered_map<std::string, std::string> config;

    std::ifstream file(filename);
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Error opening config file: " << filename << std::endl;
        return;
    }

    while (std::getline(file, line)) {
        // Skip empty lines and comments
        if (line.empty() || line[0] == '#') continue;

        std::istringstream iss(line);
        std::string key, value;
        if (std::getline(iss, key, '=') && std::getline(iss, value)) {
            param[key] = value;
        }
    }

    exchange = param["exchange"];
    order_type = param["order_type"];
    symbol = param["symbol"];
    fee_tier = param["fee_tier"];

    quantity = stod(param["quantity"]);
    volatility = stod(param["volatility"]);

    return;
}

// For testing
// int main() {
//     auto config = readConfig();

//     std::cout << "Exchange: " << config["exchange"] << std::endl;
//     std::cout << "Symbol: " << config["symbol"] << std::endl;
//     std::cout << "Order Type: " << config["order_type"] << std::endl;
//     std::cout << "Quantity: " << config["quantity"] << std::endl;
//     std::cout << "Volatility: " << config["volatility"] << std::endl;
//     std::cout << "Fee Tier: " << config["fee_tier"] << std::endl;

//     return 0;
// }
