#include "../include/VMamode.hpp"

VMamode::VMamode(std::uint8_t value) : Variable("V_MAMODE", value) {}

VMamode::VMamode(const nlohmann::json & j, const std::string & order) : Variable("V_MAMODE", j, order) {}