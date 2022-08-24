#include "../include/MLinegauge.hpp"

MLinegauge::MLinegauge(std::uint8_t value) : Variable("M_LINEGAUGE", value) {}

MLinegauge::MLinegauge(const nlohmann::json & j, const std::string & order) : Variable("M_LINEGAUGE", j, order) {}