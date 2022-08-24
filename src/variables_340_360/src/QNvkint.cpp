#include "../include/QNvkint.hpp"

QNvkint::QNvkint(std::uint8_t value) : Variable("Q_NVKINT", value) {}

QNvkint::QNvkint(const nlohmann::json & j, const std::string & order) : Variable("Q_NVKINT", j, order) {}