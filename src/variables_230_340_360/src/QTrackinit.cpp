#include "../include/QTrackinit.hpp"

QTrackinit::QTrackinit(std::uint8_t value) : Variable("Q_TRACKINIT", value) {}

QTrackinit::QTrackinit(const nlohmann::json & j, const std::string & order) : Variable("Q_TRACKINIT", j, order) {}