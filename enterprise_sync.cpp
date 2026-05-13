#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

/**
 * @file enterprise_sync.cpp
 * @brief Enterprise Multi-Node Logic: Cloud Acceleration
 * @author Lauro Sergio Vasconcellos Beck
 */

struct TechNode {
    std::string ticker;
    double cloud_growth;
    std::string signal;
};

int main() {
    std::vector<TechNode> portfolio = {
        {"GOOGL", 28.0, "BUY"},
        {"MSFT",  31.0, "HOLD"},
        {"ORCL",  42.0, "BUY_ACCELERATE"},
        {"IBM",   7.5,  "BUY_YIELD"},
        {"AAPL",  14.0, "HOLD"}
    };

    std::cout << ">>> STARGATE CLUSTER: GLOBAL TECH SYNC V2 <<<" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    
    for (const auto& node : portfolio) {
        std::cout << std::setw(8) << node.ticker 
                  << " | Cloud Growth: " << node.cloud_growth << "%"
                  << " | SIGNAL: " << node.signal << std::endl;
    }

    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "STATUS: ENTERPRISE BUY CONFIRMED ON CLOUD ACCELERATION" << std::endl;
    
    return 0;
}
