#include "../include/QScale.hpp"

QScale::QScale(std::uint8_t value) : Variable("Q_SCALE", value) {}

QScale::QScale(const nlohmann::json & j, const std::string & order) : Variable("Q_SCALE", j, order) {}