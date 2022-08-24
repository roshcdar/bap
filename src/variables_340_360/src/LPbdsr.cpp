#include "../include/LPbdsr.hpp"

LPbdsr::LPbdsr(std::uint16_t value) : Variable("L_PBDSR", value) {}

LPbdsr::LPbdsr(const nlohmann::json & j, const std::string & order) : Variable("L_PBDSR", j, order) {}