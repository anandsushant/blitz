#include "../include/packet.hpp"

int fee_tier_ = stoi(fee_tier);

std::pair<double, double> fees;
double maker_fee, taker_fee;

// here quantity is in USD
std::pair<double, double> get_fees(const double& quantity) {
    return {0.08, 0.1};
}

// here trade_amount is price * asset_quantity
double expected_trade_fee (const double& trade_amount) {
    taker_fee = get_fees(fee_tier).second();
    return (trade_amount * taker_fee) / 100.00;
}