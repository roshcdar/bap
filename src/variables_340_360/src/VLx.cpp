#include "../include/VLx.hpp"

VLx::VLx(std::uint8_t value) : Variable("V_LX", value) {}

VLx::VLx(const nlohmann::json & j, const std::string & order) : Variable("V_LX", j, order) {}