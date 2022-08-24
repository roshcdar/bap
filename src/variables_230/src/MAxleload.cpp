#include "../include/MAxleload.hpp"

MAxleload::MAxleload(std::uint8_t value) : Variable("M_AXLELOAD", value) {}

MAxleload::MAxleload(const nlohmann::json & j, const std::string & order) : Variable("M_AXLELOAD", j, order) {}