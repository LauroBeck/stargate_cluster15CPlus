#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

/**
 * @file LATAM_Banking_Node.cpp
 * @brief São Paulo Financial District Telemetry
 * @author Lauro Sergio Vasconcellos Beck
 */

struct BankingNode {
    std::string ticker;
    double delta;
    std::string risk_profile;
};

int main() {
    // Current Session Data: 2026-05-12/13
    std::vector<BankingNode> b3_sync = {
        {"ITUB",  -1.10, "STABLE_DIVIDEND"},
        {"BSBR",  -0.40, "YIELD_DEFENSE"},
        {"NU",    -1.70, "TECH_GROWTH_VOLATILITY"},
        {"BBD",   -0.89, "RECOVERY_NODE"},
        {"IBOV",  -0.86, "MARKET_BENCHMARK"}
    };

    std::cout << "\n>>> STARGATE LATAM: SÃO PAULO BANKING SYNC <<<" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "IBOVESPA LEVEL: 180,342.33 | SELIC: 14.50%" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    for (const auto& bank : b3_sync) {
        std::cout << std::left << std::setw(8) << bank.ticker 
                  << " | Delta: " << (bank.delta > 0 ? "+" : "") << std::fixed << std::setprecision(2) << bank.delta << "%"
                  << " | RISK: " << bank.risk_profile << std::endl;
    }

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "STATUS: MONITORING INFLATIONARY PRESSURE ON CREDIT" << std::endl;
    
    return 0;
}
