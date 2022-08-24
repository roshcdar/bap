#include "../include/VNvallowovtrp.hpp"

VNvallowovtrp::VNvallowovtrp(std::uint8_t value) : Variable("V_NVALLOWOVTRP", value) {}

VNvallowovtrp::VNvallowovtrp(const nlohmann::json & j, const std::string & order) : Variable("V_NVALLOWOVTRP", j, order) {}