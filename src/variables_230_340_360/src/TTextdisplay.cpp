#include "../include/TTextdisplay.hpp"

TTextdisplay::TTextdisplay(std::uint16_t value) : Variable("T_TEXTDISPLAY", value) {}

TTextdisplay::TTextdisplay(const nlohmann::json & j, const std::string & order) : Variable("T_TEXTDISPLAY", j, order) {}