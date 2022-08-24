#include "../include/QMposition.hpp"

QMposition::QMposition(std::uint8_t value) : Variable("Q_MPOSITION", value) {}

QMposition::QMposition(const nlohmann::json & j, const std::string & order) : Variable("Q_MPOSITION", j, order) {}