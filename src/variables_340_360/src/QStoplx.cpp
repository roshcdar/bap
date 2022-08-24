#include "../include/QStoplx.hpp"

QStoplx::QStoplx(std::uint8_t value) : Variable("Q_STOPLX", value) {}

QStoplx::QStoplx(const nlohmann::json & j, const std::string & order) : Variable("Q_STOPLX", j, order) {}