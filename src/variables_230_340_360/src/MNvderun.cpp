#include "../include/MNvderun.hpp"

MNvderun::MNvderun(std::uint8_t value) : Variable("M_NVDERUN", value) {}

MNvderun::MNvderun(const nlohmann::json & j, const std::string & order) : Variable("M_NVDERUN", j, order) {}