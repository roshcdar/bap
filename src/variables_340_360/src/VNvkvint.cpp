#include "../include/VNvkvint.hpp"

VNvkvint::VNvkvint(std::uint8_t value) : Variable("V_NVKVINT", value) {}

VNvkvint::VNvkvint(const nlohmann::json & j, const std::string & order) : Variable("V_NVKVINT", j, order) {}