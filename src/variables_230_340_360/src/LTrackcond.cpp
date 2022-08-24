#include "../include/LTrackcond.hpp"

LTrackcond::LTrackcond(std::uint16_t value) : Variable("L_TRACKCOND", value) {}

LTrackcond::LTrackcond(const nlohmann::json & j, const std::string & order) : Variable("L_TRACKCOND", j, order) {}