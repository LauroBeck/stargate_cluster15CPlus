cmake_minimum_required(VERSION 3.10)

# Project: Stargate Cluster 15 - Oracle Enterprise Edition
project(StargateOracle VERSION 1.5.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native")

# Define the Purified Enterprise Node
add_executable(OracleCplus_enterprise_hub enterprise_sync.cpp)

# Output Directory Configuration
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

message(STATUS "STARGATE CLUSTER: Oracle Enterprise Module configured.")
