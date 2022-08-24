#include "../include/MLevel.hpp"

MLevel::MLevel(std::uint8_t value) : Variable("M_LEVEL", value) {}

MLevel::MLevel(const nlohmann::json & j, const std::string & order) : Variable("M_LEVEL", j, order) {}