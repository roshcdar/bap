#include "../include/VNvshunt.hpp"

VNvshunt::VNvshunt(std::uint8_t value) : Variable("V_NVSHUNT", value) {}

VNvshunt::VNvshunt(const nlohmann::json & j, const std::string & order) : Variable("V_NVSHUNT", j, order) {}