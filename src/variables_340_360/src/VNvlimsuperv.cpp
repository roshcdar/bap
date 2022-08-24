#include "../include/VNvlimsuperv.hpp"

VNvlimsuperv::VNvlimsuperv(std::uint8_t value) : Variable("V_NVLIMSUPERV", value) {}

VNvlimsuperv::VNvlimsuperv(const nlohmann::json & j, const std::string & order) : Variable("V_NVLIMSUPERV", j, order) {}