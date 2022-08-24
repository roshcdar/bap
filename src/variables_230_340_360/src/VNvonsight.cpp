#include "../include/VNvonsight.hpp"

VNvonsight::VNvonsight(std::uint8_t value) : Variable("V_NVONSIGHT", value) {}

VNvonsight::VNvonsight(const nlohmann::json & j, const std::string & order) : Variable("V_NVONSIGHT", j, order) {}