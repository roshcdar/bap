#include "../include/MMamode.hpp"

MMamode::MMamode(std::uint8_t value) : Variable("M_MAMODE", value) {}

MMamode::MMamode(const nlohmann::json & j, const std::string & order) : Variable("M_MAMODE", j, order) {}