#include "../include/VNvrel.hpp"

VNvrel::VNvrel(std::uint8_t value) : Variable("V_NVREL", value) {}

VNvrel::VNvrel(const nlohmann::json & j, const std::string & order) : Variable("V_NVREL", j, order) {}