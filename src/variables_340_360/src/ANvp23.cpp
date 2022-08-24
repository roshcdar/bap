#include "../include/ANvp23.hpp"

ANvp23::ANvp23(std::uint8_t value) : Variable("A_NVP23", value) {}

ANvp23::ANvp23(const nlohmann::json & j, const std::string & order) : Variable("A_NVP23", j, order) {}