#include "../include/QRbc.hpp"

QRbc::QRbc(std::uint8_t value) : Variable("Q_RBC", value) {}

QRbc::QRbc(const nlohmann::json & j, const std::string & order) : Variable("Q_RBC", j, order) {}