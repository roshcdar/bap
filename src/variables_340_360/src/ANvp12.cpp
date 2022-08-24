#include "../include/ANvp12.hpp"

ANvp12::ANvp12(std::uint8_t value) : Variable("A_NVP12", value) {}

ANvp12::ANvp12(const nlohmann::json & j, const std::string & order) : Variable("A_NVP12", j, order) {}