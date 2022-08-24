#include "../include/QConftextdisplay.hpp"

QConftextdisplay::QConftextdisplay(std::uint8_t value) : Variable("Q_CONFTEXTDISPLAY", value) {}

QConftextdisplay::QConftextdisplay(const nlohmann::json & j, const std::string & order) : Variable("Q_CONFTEXTDISPLAY", j, order) {}