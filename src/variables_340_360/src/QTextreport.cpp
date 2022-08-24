#include "../include/QTextreport.hpp"

QTextreport::QTextreport(std::uint8_t value) : Variable("Q_TEXTREPORT", value) {}

QTextreport::QTextreport(const nlohmann::json & j, const std::string & order) : Variable("Q_TEXTREPORT", j, order) {}