#include "../include/LTsr.hpp"

LTsr::LTsr(std::uint16_t value) : Variable("L_TSR", value) {}

LTsr::LTsr(const nlohmann::json & j, const std::string & order) : Variable("L_TSR", j, order) {}