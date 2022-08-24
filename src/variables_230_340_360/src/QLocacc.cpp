#include "../include/QLocacc.hpp"

QLocacc::QLocacc(std::uint8_t value) : Variable("Q_LOCACC", value) {}

QLocacc::QLocacc(const nlohmann::json & j, const std::string & order) : Variable("Q_LOCACC", j, order) {}