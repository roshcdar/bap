#include "../include/QNvdriverAdhes.hpp"

QNvdriverAdhes::QNvdriverAdhes(std::uint8_t value) : Variable("Q_NVDRIVER_ADHES", value) {}

QNvdriverAdhes::QNvdriverAdhes(const nlohmann::json & j, const std::string & order) : Variable("Q_NVDRIVER_ADHES", j, order) {}