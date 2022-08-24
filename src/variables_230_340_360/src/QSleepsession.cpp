#include "../include/QSleepsession.hpp"

QSleepsession::QSleepsession(std::uint8_t value) : Variable("Q_SLEEPSESSION", value) {}

QSleepsession::QSleepsession(const nlohmann::json & j, const std::string & order) : Variable("Q_SLEEPSESSION", j, order) {}