#include "../include/DTraction.hpp"

DTraction::DTraction(std::uint16_t value) : Variable("D_TRACTION", value) {}

DTraction::DTraction(const nlohmann::json & j, const std::string & order) : Variable("D_TRACTION", j, order) {}