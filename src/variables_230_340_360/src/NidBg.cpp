#include "../include/NidBg.hpp"

NidBg::NidBg(std::uint16_t value) : Variable("NID_BG", value) {}

NidBg::NidBg(const nlohmann::json & j, const std::string & order) : Variable("NID_BG", j, order) {}