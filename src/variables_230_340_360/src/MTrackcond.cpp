#include "../include/MTrackcond.hpp"

MTrackcond::MTrackcond(std::uint8_t value) : Variable("M_TRACKCOND", value) {}

MTrackcond::MTrackcond(const nlohmann::json & j, const std::string & order) : Variable("M_TRACKCOND", j, order) {}