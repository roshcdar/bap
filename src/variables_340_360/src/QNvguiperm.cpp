#include "../include/QNvguiperm.hpp"

QNvguiperm::QNvguiperm(std::uint8_t value) : Variable("Q_NVGUIPERM", value) {}

QNvguiperm::QNvguiperm(const nlohmann::json & j, const std::string & order) : Variable("Q_NVGUIPERM", j, order) {}