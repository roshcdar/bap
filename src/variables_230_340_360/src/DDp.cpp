#include "../include/DDp.hpp"

DDp::DDp(std::uint16_t value) : Variable("D_DP", value) {}

DDp::DDp(const nlohmann::json & j, const std::string & order) : Variable("D_DP", j, order) {}