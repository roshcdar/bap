#include "../include/VAxleload.hpp"

VAxleload::VAxleload(std::uint8_t value) : Variable("V_AXLELOAD", value) {}

VAxleload::VAxleload(const nlohmann::json & j, const std::string & order) : Variable("V_AXLELOAD", j, order) {}