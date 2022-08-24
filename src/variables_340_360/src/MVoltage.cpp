#include "../include/MVoltage.hpp"

MVoltage::MVoltage(std::uint8_t value) : Variable("M_VOLTAGE", value) {}

MVoltage::MVoltage(const nlohmann::json & j, const std::string & order) : Variable("M_VOLTAGE", j, order) {}