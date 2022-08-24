#include "../include/MLoc.hpp"

MLoc::MLoc(std::uint8_t value) : Variable("M_LOC", value) {}

MLoc::MLoc(const nlohmann::json & j, const std::string & order) : Variable("M_LOC", j, order) {}