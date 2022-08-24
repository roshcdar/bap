#include "../include/VReverse.hpp"

VReverse::VReverse(std::uint8_t value) : Variable("V_REVERSE", value) {}

VReverse::VReverse(const nlohmann::json & j, const std::string & order) : Variable("V_REVERSE", j, order) {}