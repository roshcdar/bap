#include "../include/VStatic.hpp"

VStatic::VStatic(std::uint8_t value) : Variable("V_STATIC", value) {}

VStatic::VStatic(const nlohmann::json & j, const std::string & order) : Variable("V_STATIC", j, order) {}