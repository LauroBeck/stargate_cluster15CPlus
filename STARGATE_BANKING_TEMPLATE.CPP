#include <iostream>
#include <string>
#include <iomanip>

#ifndef BANK_ID
    #define BANK_ID "UNKNOWN"
#endif

int main() {
    std::string id = BANK_ID;
    std::cout << ">>> [STARGATE NODE: " << std::left << std::setw(8) << id << "] ";

    if (id == "JPM" || id == "BNY" || id == "BTG") {
        std::cout << "STATUS: PRIMARY ALPHA | SIGNAL: ACCUMULATE" << std::endl;
    } else if (id == "NU" || id == "C6" || id == "BOE") {
        std::cout << "STATUS: VOLATILITY    | SIGNAL: MONITOR_RISK" << std::endl;
    } else if (id == "ITUB" || id == "BBAS") {
        std::cout << "STATUS: REGIONAL LEAD | SIGNAL: YIELD_STABLE" << std::endl;
    } else {
        std::cout << "STATUS: SECTOR BASE   | SIGNAL: HOLD_POSITION" << std::endl;
    }
    
    return 0;
}
