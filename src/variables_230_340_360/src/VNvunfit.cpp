#include "../include/VNvunfit.hpp"

VNvunfit::VNvunfit(std::uint8_t value) : Variable("V_NVUNFIT", value) {}

VNvunfit::VNvunfit(const nlohmann::json & j, const std::string & order) : Variable("V_NVUNFIT", j, order) {}