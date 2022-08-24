#include "../include/LAxleload.hpp"

LAxleload::LAxleload(std::uint16_t value) : Variable("L_AXLELOAD", value) {}

LAxleload::LAxleload(const nlohmann::json & j, const std::string & order) : Variable("L_AXLELOAD", j, order) {}