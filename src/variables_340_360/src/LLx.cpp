#include "../include/LLx.hpp"

LLx::LLx(std::uint16_t value) : Variable("L_LX", value) {}

LLx::LLx(const nlohmann::json & j, const std::string & order) : Variable("L_LX", j, order) {}