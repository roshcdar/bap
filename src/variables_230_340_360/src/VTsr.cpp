#include "../include/VTsr.hpp"

VTsr::VTsr(std::uint8_t value) : Variable("V_TSR", value) {}

VTsr::VTsr(const nlohmann::json & j, const std::string & order) : Variable("V_TSR", j, order) {}