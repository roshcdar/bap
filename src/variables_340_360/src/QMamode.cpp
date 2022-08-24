#include "../include/QMamode.hpp"

QMamode::QMamode(std::uint8_t value) : Variable("Q_MAMODE", value) {}

QMamode::QMamode(const nlohmann::json & j, const std::string & order) : Variable("Q_MAMODE", j, order) {}