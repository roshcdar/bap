cmake_minimum_required(VERSION 3.12)
project(test_360)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_PREFIX_PATH "../../src/packets_230_340_360/install")
find_package(packets_230_340_360 CONFIG REQUIRED)
set(CMAKE_PREFIX_PATH "../../src/packets_340_360/install")
find_package(packets_340_360 CONFIG REQUIRED)
set(CMAKE_PREFIX_PATH "../../src/packets_360/install")
find_package(packets_360 CONFIG REQUIRED)
set(CMAKE_PREFIX_PATH "../../src/variables_230_340_360/install")
find_package(variables_230_340_360 CONFIG REQUIRED)
set(CMAKE_PREFIX_PATH "../../src/variables_340_360/install")
find_package(variables_340_360 CONFIG REQUIRED)
set(CMAKE_PREFIX_PATH "../../src/variables_360/install")
find_package(variables_360 CONFIG REQUIRED)
add_executable(${PROJECT_NAME} test.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE packets_230_340_360::packets_230_340_360 packets_340_360::packets_340_360 packets_360::packets_360 variables_230_340_360::variables_230_340_360 variables_340_360::variables_340_360 variables_360::variables_360)
