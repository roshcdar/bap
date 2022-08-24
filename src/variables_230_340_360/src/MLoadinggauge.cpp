#include "../include/MLoadinggauge.hpp"

MLoadinggauge::MLoadinggauge(std::uint8_t value) : Variable("M_LOADINGGAUGE", value) {}

MLoadinggauge::MLoadinggauge(const nlohmann::json & j, const std::string & order) : Variable("M_LOADINGGAUGE", j, order) {}