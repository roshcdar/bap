#include "../include/TSectiontimer.hpp"

TSectiontimer::TSectiontimer(std::uint16_t value) : Variable("T_SECTIONTIMER", value) {}

TSectiontimer::TSectiontimer(const nlohmann::json & j, const std::string & order) : Variable("T_SECTIONTIMER", j, order) {}