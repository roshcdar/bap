#include "../include/QNewcountry.hpp"

QNewcountry::QNewcountry(std::uint8_t value) : Variable("Q_NEWCOUNTRY", value) {}

QNewcountry::QNewcountry(const nlohmann::json & j, const std::string & order) : Variable("Q_NEWCOUNTRY", j, order) {}