#include "../include/DTafdisplay.hpp"

DTafdisplay::DTafdisplay(std::uint16_t value) : Variable("D_TAFDISPLAY", value) {}

DTafdisplay::DTafdisplay(const nlohmann::json & j, const std::string & order) : Variable("D_TAFDISPLAY", j, order) {}