#include "../include/QNvkvintset.hpp"

QNvkvintset::QNvkvintset(std::uint8_t value) : Variable("Q_NVKVINTSET", value) {}

QNvkvintset::QNvkvintset(const nlohmann::json & j, const std::string & order) : Variable("Q_NVKVINTSET", j, order) {}