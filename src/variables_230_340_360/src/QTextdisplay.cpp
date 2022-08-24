#include "../include/QTextdisplay.hpp"

QTextdisplay::QTextdisplay(std::uint8_t value) : Variable("Q_TEXTDISPLAY", value) {}

QTextdisplay::QTextdisplay(const nlohmann::json & j, const std::string & order) : Variable("Q_TEXTDISPLAY", j, order) {}