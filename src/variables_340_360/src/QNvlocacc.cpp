#include "../include/QNvlocacc.hpp"

QNvlocacc::QNvlocacc(std::uint8_t value) : Variable("Q_NVLOCACC", value) {}

QNvlocacc::QNvlocacc(const nlohmann::json & j, const std::string & order) : Variable("Q_NVLOCACC", j, order) {}