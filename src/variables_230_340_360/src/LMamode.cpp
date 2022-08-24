#include "../include/LMamode.hpp"

LMamode::LMamode(std::uint16_t value) : Variable("L_MAMODE", value) {}

LMamode::LMamode(const nlohmann::json & j, const std::string & order) : Variable("L_MAMODE", j, order) {}