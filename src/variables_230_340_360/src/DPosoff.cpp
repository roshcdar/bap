#include "../include/DPosoff.hpp"

DPosoff::DPosoff(std::uint16_t value) : Variable("D_POSOFF", value) {}

DPosoff::DPosoff(const nlohmann::json & j, const std::string & order) : Variable("D_POSOFF", j, order) {}