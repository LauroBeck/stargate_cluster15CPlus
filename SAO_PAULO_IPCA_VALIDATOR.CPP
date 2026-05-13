#include <iostream>
#include <iomanip>
#include <string>

/**
 * @file SAO_PAULO_IPCA_VALIDATOR.CPP
 * @brief BCB Policy Validation (April/May 2026 Data)
 * @author Lauro Sergio Vasconcellos Beck
 */

int main() {
    // Real-Time Telemetry: May 13, 2026
    double ipca_mid_april = 0.89;    // Sharp acceleration from 0.44%
    double ipca_yoy = 4.37;         // Near upper tolerance (4.5%)
    double selic_rate = 14.50;      // Copom 278th Meeting Decison
    double target_ipca = 3.00;      // BCB Anchor
    double usd_brl = 4.91;          // Stable exchange calibration

    std::cout << "\n>>> STARGATE: SÃO PAULO IPCA/SELIC VALIDATION <<<" << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "IBOVESPA LEVEL    | 181,909 (Consolidating)" << std::endl;
    std::cout << "USD/BRL SPOT      | R$ " << usd_brl << std::endl;
    std::cout << "IPCA YOY          | " << ipca_yoy << "% (TARGET: " << target_ipca << "%)" << std::endl;
    std::cout << "SELIC BENCHMARK   | " << selic_rate << "%" << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;

    if (ipca_yoy > 4.00) {
        std::cout << "POLICY VERDICT    | HAWKISH SPREAD MAINTAINED" << std::endl;
        std::cout << "RISK FACTOR       | FUEL/FOOD (STREIT OF HORMUZ FRICTION)" << std::endl;
        std::cout << "BANKING SIGNAL    | OVERWEIGHT ITUB/BTG (YIELD SPREAD)" << std::endl;
    }

    return 0;
}
