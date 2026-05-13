#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct MarketNode {
    std::string ticker;
    double delta;
    std::string status;
};

int main() {
    std::vector<MarketNode> sync = {
        {"ORCL", -3.62, "ACCUMULATE_DIP"},
        {"MSFT", -1.18, "HOLD_STABLE"},
        {"JPM",  +1.63, "ALPHA_LEAD"},
        {"ITUB", -0.98, "REGIONAL_MONITOR"},
        {"BAC",  +0.45, "YIELD_SUPPORT"}
    };

    std::cout << "\n>>> STARGATE CLUSTER: GLOBAL TECH SYNC V3 <<<" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    for (const auto& node : sync) {
        std::cout << std::left << std::setw(8) << node.ticker 
                  << " | Delta: " << (node.delta > 0 ? "+" : "") << std::fixed << std::setprecision(2) << node.delta << "%"
                  << " | STATUS: " << node.status << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl;
    return 0;
}
