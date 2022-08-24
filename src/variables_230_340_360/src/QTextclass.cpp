#include "../include/QTextclass.hpp"

QTextclass::QTextclass(std::uint8_t value) : Variable("Q_TEXTCLASS", value) {}

QTextclass::QTextclass(const nlohmann::json & j, const std::string & order) : Variable("Q_TEXTCLASS", j, order) {}