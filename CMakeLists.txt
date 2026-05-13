cmake_minimum_required(VERSION 3.10)

# Project Metadata: Employment Mission 2026
project(StargateCluster15 VERSION 1.5.0 LANGUAGES CXX)

# Global Compiler Optimization (-O3 for High-Frequency Logic)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native -flto")

# 1. ENTERPRISE HUB NODE
add_executable(enterprise_hub enterprise_sync.cpp)

# 2. DATABASE INITIALIZATION KERNEL
add_executable(db_init_kernel StargateDBInit.cpp)

# 3. TRINITY SIGNAL ENGINE
add_executable(trinity_engine TRINITY_SIGNAL_ENGINE.CPP)

# Output Directory Configuration
set_target_properties(enterprise_hub PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set_target_properties(db_init_kernel PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set_target_properties(trinity_engine PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

message(STATUS "STARGATE CLUSTER: Build system configured for High-Frequency Execution.")
