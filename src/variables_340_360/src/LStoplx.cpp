#include "../include/LStoplx.hpp"

LStoplx::LStoplx(std::uint16_t value) : Variable("L_STOPLX", value) {}

LStoplx::LStoplx(const nlohmann::json & j, const std::string & order) : Variable("L_STOPLX", j, order) {}