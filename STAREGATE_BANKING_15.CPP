#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

/**
 * @file STAREGATE_BANKING_15.CPP
 * @brief 15-Bank Sequential Telemetry Node
 * @author Lauro Sergio Vasconcellos Beck
 */

struct BankNode {
    std::string ticker;
    double delta;
    std::string region;
    std::string signal;
};

int main() {
    std::vector<BankNode> federation = {
        // --- US TIER 1 ---
        {"JPM",  +1.63, "USA", "ALPHA_LEAD"},
        {"BAC",  +0.45, "USA", "BULL_SUPPORT"},
        {"WFC",  +0.22, "USA", "STABLE"},
        {"C",    -0.15, "USA", "MONITOR"},
        {"GS",   +0.88, "USA", "CAP_MARKETS_BUY"},
        {"MS",   -0.45, "USA", "HOLD"},
        // --- GLOBAL / EU TIER ---
        {"HSBC", -0.64, "UK",  "VOLATILITY_RISK"},
        {"LLOY", -4.35, "UK",  "LIQUIDITY_PRESSURE"},
        {"UBS",  +0.12, "CH",  "SAFE_HAVEN"},
        {"SAN",  -0.55, "ES",  "YIELD_STABLE"},
        {"RY",   +0.30, "CAN", "DEFENSIVE"},
        // --- LATAM / EMERGING ---
        {"ITUB", -0.98, "BR",  "REGIONAL_BUY"},
        {"BSBR", -0.70, "BR",  "YIELD_DEFENSE"},
        {"NU",   -1.70, "BR",  "TECH_RISK"},
        {"BBAS", -0.10, "BR",  "PUBLIC_STABILITY"}
    };

    std::cout << "\n>>> STARGATE FEDERATION: 15-BANK SEQUENTIAL TELEMETRY <<<" << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(8) << "TICKER" << " | " << std::setw(6) << "DELTA" 
              << " | " << std::setw(5) << "REG" << " | " << "SIGNAL" << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;

    for (const auto& bank : federation) {
        std::cout << std::left << std::setw(8) << bank.ticker 
                  << " | " << (bank.delta > 0 ? "+" : "") << std::fixed << std::setprecision(2) << bank.delta << "%"
                  << " | " << std::setw(5) << bank.region 
                  << " | " << bank.signal << std::endl;
    }

    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "STATUS: GLOBAL BANKING ROTATION CONFIRMED | SPX 7500 TARGET INTACT" << std::endl;

    return 0;
}
