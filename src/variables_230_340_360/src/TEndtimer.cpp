#include "../include/TEndtimer.hpp"

TEndtimer::TEndtimer(std::uint16_t value) : Variable("T_ENDTIMER", value) {}

TEndtimer::TEndtimer(const nlohmann::json & j, const std::string & order) : Variable("T_ENDTIMER", j, order) {}