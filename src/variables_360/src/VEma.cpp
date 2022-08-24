#include "../include/VEma.hpp"

VEma::VEma(std::uint8_t value) : Variable("V_EMA", value) {}

VEma::VEma(const nlohmann::json & j, const std::string & order) : Variable("V_EMA", j, order) {}