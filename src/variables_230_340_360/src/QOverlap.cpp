#include "../include/QOverlap.hpp"

QOverlap::QOverlap(std::uint8_t value) : Variable("Q_OVERLAP", value) {}

QOverlap::QOverlap(const nlohmann::json & j, const std::string & order) : Variable("Q_OVERLAP", j, order) {}