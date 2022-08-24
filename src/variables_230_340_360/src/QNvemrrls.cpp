#include "../include/QNvemrrls.hpp"

QNvemrrls::QNvemrrls(std::uint8_t value) : Variable("Q_NVEMRRLS", value) {}

QNvemrrls::QNvemrrls(const nlohmann::json & j, const std::string & order) : Variable("Q_NVEMRRLS", j, order) {}