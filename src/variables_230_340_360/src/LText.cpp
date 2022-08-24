#include "../include/LText.hpp"

LText::LText(std::uint8_t value) : Variable("L_TEXT", value) {}

LText::LText(const nlohmann::json & j, const std::string & order) : Variable("L_TEXT", j, order) {}