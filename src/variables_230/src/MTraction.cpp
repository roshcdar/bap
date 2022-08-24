#include "../include/MTraction.hpp"

MTraction::MTraction(std::uint8_t value) : Variable("M_TRACTION", value) {}

MTraction::MTraction(const nlohmann::json & j, const std::string & order) : Variable("M_TRACTION", j, order) {}