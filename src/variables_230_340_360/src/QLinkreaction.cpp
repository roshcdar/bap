#include "../include/QLinkreaction.hpp"

QLinkreaction::QLinkreaction(std::uint8_t value) : Variable("Q_LINKREACTION", value) {}

QLinkreaction::QLinkreaction(const nlohmann::json & j, const std::string & order) : Variable("Q_LINKREACTION", j, order) {}