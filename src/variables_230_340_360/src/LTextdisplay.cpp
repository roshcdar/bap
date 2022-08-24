#include "../include/LTextdisplay.hpp"

LTextdisplay::LTextdisplay(std::uint16_t value) : Variable("L_TEXTDISPLAY", value) {}

LTextdisplay::LTextdisplay(const nlohmann::json & j, const std::string & order) : Variable("L_TEXTDISPLAY", j, order) {}