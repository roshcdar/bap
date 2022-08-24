#include "../include/QSuitability.hpp"

QSuitability::QSuitability(std::uint8_t value) : Variable("Q_SUITABILITY", value) {}

QSuitability::QSuitability(const nlohmann::json & j, const std::string & order) : Variable("Q_SUITABILITY", j, order) {}