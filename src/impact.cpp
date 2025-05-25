#include <cmath>
#include <iostream>

// Temporary impact function: eta * volume^alpha
double temporaryImpact(double volume, double alpha, double eta) {
    return eta * std::pow(volume, alpha);
}

// Permanent impact function: gamma * volume^beta
double permanentImpact(double volume, double beta, double gamma) {
    return gamma * std::pow(volume, beta);
}

// Expected market impact calculation
// totalVolume = total shares to trade
// avgTradeSize = average size of each trade
// alpha, beta, eta, gamma are the model parameters
double expectedMarketImpact(double totalVolume, double avgTradeSize, 
                            double alpha, double beta, double eta, double gamma) 
{
    int numberOfTrades = static_cast<int>(std::ceil(totalVolume / avgTradeSize));

    double tempImpactTotal = 0.0;
    double permImpactTotal = 0.0;

    for (int i = 0; i < numberOfTrades; ++i) {
        // Temporary impact for this trade
        tempImpactTotal += temporaryImpact(avgTradeSize, alpha, eta);

        // Permanent impact accumulates with executed volume so far
        double executedVolume = avgTradeSize * (i + 1);
        permImpactTotal += permanentImpact(executedVolume, beta, gamma);
    }

    return tempImpactTotal + permImpactTotal;
}

int impact() {
    double totalVolume = 500.0;
    double avgTradeSize = 10.0;
    double alpha = 1.0;
    double beta = 1.0;
    double eta = 0.05;
    double gamma = 0.05;

    double impact = expectedMarketImpact(totalVolume, avgTradeSize, alpha, beta, eta, gamma);

    return impact;
}
