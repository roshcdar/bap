#include "../include/DNvroll.hpp"

DNvroll::DNvroll(std::uint16_t value) : Variable("D_NVROLL", value) {}

DNvroll::DNvroll(const nlohmann::json & j, const std::string & order) : Variable("D_NVROLL", j, order) {}