#include "../include/QText.hpp"

QText::QText(std::uint8_t value) : Variable("Q_TEXT", value) {}

QText::QText(const nlohmann::json & j, const std::string & order) : Variable("Q_TEXT", j, order) {}