#include "../include/QStatus.hpp"

QStatus::QStatus(std::uint8_t value) : Variable("Q_STATUS", value) {}

QStatus::QStatus(const nlohmann::json & j, const std::string & order) : Variable("Q_STATUS", j, order) {}