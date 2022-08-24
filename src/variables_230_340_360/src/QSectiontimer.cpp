#include "../include/QSectiontimer.hpp"

QSectiontimer::QSectiontimer(std::uint8_t value) : Variable("Q_SECTIONTIMER", value) {}

QSectiontimer::QSectiontimer(const nlohmann::json & j, const std::string & order) : Variable("Q_SECTIONTIMER", j, order) {}