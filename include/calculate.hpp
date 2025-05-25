#ifndef CALCULATE_HPP
#define CALCULATE_HPP

#include <string>
#include <vector>
#include <unordered_map>

#include "../include/packet.hpp"




// std::unordered_map<std::string, std::string> readConfig();

std::pair<double, double> calculate1(const std::vector<Order>& asks);

#endif