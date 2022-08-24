#include "../include/VNvstff.hpp"

VNvstff::VNvstff(std::uint8_t value) : Variable("V_NVSTFF", value) {}

VNvstff::VNvstff(const nlohmann::json & j, const std::string & order) : Variable("V_NVSTFF", j, order) {}