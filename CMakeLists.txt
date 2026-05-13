cmake_minimum_required(VERSION 3.10)
project(StargateFederation)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Banking Federation
set(BANKS "BNY" "JPM" "MS" "WFC" "NU" "C6" "BAC" "ITUB" "BTG" "BBAS" "C")
foreach(BANK ${BANKS})
    add_executable(OracleCplus_${BANK}_node STARGATE_BANKING_TEMPLATE.CPP)
    target_compile_definitions(OracleCplus_${BANK}_node PRIVATE BANK_ID="${BANK}")
endforeach()

# Validation Suite
add_executable(OracleCplus_bloomberg_v1 BLOOMBERG_BQL_VALIDATION.CPP)
add_executable(OracleCplus_bloomberg_v2 BLOOMBERG_BQL_VALIDATION_V2.CPP)
add_executable(OracleCplus_sp_validator SAO_PAULO_IPCA_VALIDATOR.CPP)

# Trinity Engine
add_executable(OracleCplus_trinity_engine TRINITY_SIGNAL_ENGINE.CPP)
