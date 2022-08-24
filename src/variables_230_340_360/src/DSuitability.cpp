#include "../include/DSuitability.hpp"

DSuitability::DSuitability(std::uint16_t value) : Variable("D_SUITABILITY", value) {}

DSuitability::DSuitability(const nlohmann::json & j, const std::string & order) : Variable("D_SUITABILITY", j, order) {}