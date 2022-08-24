#include "../include/QOrientation.hpp"

QOrientation::QOrientation(std::uint8_t value) : Variable("Q_ORIENTATION", value) {}

QOrientation::QOrientation(const nlohmann::json & j, const std::string & order) : Variable("Q_ORIENTATION", j, order) {}