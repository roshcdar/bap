#include "../include/MMode.hpp"

MMode::MMode(std::uint8_t value) : Variable("M_MODE", value) {}

MMode::MMode(const nlohmann::json & j, const std::string & order) : Variable("M_MODE", j, order) {}