#include "../include/DTextdisplay.hpp"

DTextdisplay::DTextdisplay(std::uint16_t value) : Variable("D_TEXTDISPLAY", value) {}

DTextdisplay::DTextdisplay(const nlohmann::json & j, const std::string & order) : Variable("D_TEXTDISPLAY", j, order) {}