#include "../include/QEndtimer.hpp"

QEndtimer::QEndtimer(std::uint8_t value) : Variable("Q_ENDTIMER", value) {}

QEndtimer::QEndtimer(const nlohmann::json & j, const std::string & order) : Variable("Q_ENDTIMER", j, order) {}