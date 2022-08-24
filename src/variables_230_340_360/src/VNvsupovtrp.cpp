#include "../include/VNvsupovtrp.hpp"

VNvsupovtrp::VNvsupovtrp(std::uint8_t value) : Variable("V_NVSUPOVTRP", value) {}

VNvsupovtrp::VNvsupovtrp(const nlohmann::json & j, const std::string & order) : Variable("V_NVSUPOVTRP", j, order) {}