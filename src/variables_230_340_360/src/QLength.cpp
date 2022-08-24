#include "../include/QLength.hpp"

QLength::QLength(std::uint8_t value) : Variable("Q_LENGTH", value) {}

QLength::QLength(const nlohmann::json & j, const std::string & order) : Variable("Q_LENGTH", j, order) {}