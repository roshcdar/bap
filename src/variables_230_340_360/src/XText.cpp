#include "../include/XText.hpp"

XText::XText(std::uint8_t value) : Variable("X_TEXT", value) {}

XText::XText(const nlohmann::json & j, const std::string & order) : Variable("X_TEXT", j, order) {}