#include "../include/DMamode.hpp"

DMamode::DMamode(std::uint16_t value) : Variable("D_MAMODE", value) {}

DMamode::DMamode(const nlohmann::json & j, const std::string & order) : Variable("D_MAMODE", j, order) {}