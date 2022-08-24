#include "../include/QDangerpoint.hpp"

QDangerpoint::QDangerpoint(std::uint8_t value) : Variable("Q_DANGERPOINT", value) {}

QDangerpoint::QDangerpoint(const nlohmann::json & j, const std::string & order) : Variable("Q_DANGERPOINT", j, order) {}