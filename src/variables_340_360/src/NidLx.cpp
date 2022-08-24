#include "../include/NidLx.hpp"

NidLx::NidLx(std::uint8_t value) : Variable("NID_LX", value) {}

NidLx::NidLx(const nlohmann::json & j, const std::string & order) : Variable("NID_LX", j, order) {}