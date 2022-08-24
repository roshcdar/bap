#include "../include/MModetextdisplay.hpp"

MModetextdisplay::MModetextdisplay(std::uint8_t value) : Variable("M_MODETEXTDISPLAY", value) {}

MModetextdisplay::MModetextdisplay(const nlohmann::json & j, const std::string & order) : Variable("M_MODETEXTDISPLAY", j, order) {}