#include "../include/DReverse.hpp"

DReverse::DReverse(std::uint16_t value) : Variable("D_REVERSE", value) {}

DReverse::DReverse(const nlohmann::json & j, const std::string & order) : Variable("D_REVERSE", j, order) {}