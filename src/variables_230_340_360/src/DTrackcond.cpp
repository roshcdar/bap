#include "../include/DTrackcond.hpp"

DTrackcond::DTrackcond(std::uint16_t value) : Variable("D_TRACKCOND", value) {}

DTrackcond::DTrackcond(const nlohmann::json & j, const std::string & order) : Variable("D_TRACKCOND", j, order) {}