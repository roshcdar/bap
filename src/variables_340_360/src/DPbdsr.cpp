#include "../include/DPbdsr.hpp"

DPbdsr::DPbdsr(std::uint16_t value) : Variable("D_PBDSR", value) {}

DPbdsr::DPbdsr(const nlohmann::json & j, const std::string & order) : Variable("D_PBDSR", j, order) {}