#include "../include/QEmergencystop.hpp"

QEmergencystop::QEmergencystop(std::uint8_t value) : Variable("Q_EMERGENCYSTOP", value) {}

QEmergencystop::QEmergencystop(const nlohmann::json & j, const std::string & order) : Variable("Q_EMERGENCYSTOP", j, order) {}