cmake_minimum_required(VERSION 3.10)
project(StargateOracle)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# NODE V2: Cloud Growth Metrics (Original)
add_executable(OracleCplus_enterprise_hub enterprise_sync.cpp)

# NODE V3: Session Volatility Metrics (New)
add_executable(OracleCplus_enterprise_v3 enterprise_sync_v3.cpp)

# NODE: Trinity Engine
add_executable(OracleCplus_trinity_engine TRINITY_SIGNAL_ENGINE.CPP)
