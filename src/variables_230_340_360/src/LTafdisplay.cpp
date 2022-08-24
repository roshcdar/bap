#include "../include/LTafdisplay.hpp"

LTafdisplay::LTafdisplay(std::uint16_t value) : Variable("L_TAFDISPLAY", value) {}

LTafdisplay::LTafdisplay(const nlohmann::json & j, const std::string & order) : Variable("L_TAFDISPLAY", j, order) {}