#include <vector>
#include <cmath>

#include "../include/packet.hpp"
#include "../include/calculate.hpp"



// using linear regression (y = mx + c) to calculate expected slippage
// here x is the commulative quantity at certain level and y is the proce at that level
// usd_amount is quantity of USD of what we want to trade
// std::pair<double, double> linear_regression_slippage(const std::vector<AskLevel>& asks, double usd_amount) {
std::pair<double, double> calculate1(const std::vector<Order>& asks) {

    double usd_amount = 100000000.0;
    std::vector<double> X; // cumulative USD
    std::vector<double> Y; // price at that cumulative USD
    double cum_usd = 0;

    for (const auto& ask : asks) {
        double level_usd = ask.price * ask.quantity;
        cum_usd += level_usd;
        X.push_back(cum_usd);
        Y.push_back(ask.price);
        if (cum_usd >= usd_amount) break; // stop once we cross target USD
    }

    // Linear Regression: Y = aX + b
    int n = X.size();
      // Avoid division by zero
    if (n == 0) return {-101.0, -101.0}; // edge case

    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_xx = 0;
    for (int i = 0; i < n; ++i) {
        sum_x += X[i];
        sum_y += Y[i];
        sum_xy += X[i] * Y[i];
        sum_xx += X[i] * X[i];
    }
    // std::cout << "n = " << n << ", sum_xx = " << sum_xx << ", sum_x = " << sum_x
    //       << ", denominator = " << (n * sum_xx - sum_x * sum_x) << std::endl;

    if ((n * sum_xx - sum_x * sum_x) == 0) return {-100.0, -100.0};
    double slope = (n * sum_xy - sum_x * sum_y) / (n * sum_xx - sum_x * sum_x);
    double intercept = (sum_y - slope * sum_x) / n;

    // Predict execution price for ~usd_amount
    double predicted_avg_price = slope * usd_amount + intercept;
    double best_price = asks[0].price;
    double slippage = predicted_avg_price - best_price;

    // std::cout << "Predicted Avg. Price = " << predicted_avg_price << "Slippage = " << slippage << std::endl;
    // return;
    return {predicted_avg_price, slippage};
}
