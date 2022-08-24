#include "../include/QNvsbfbperm.hpp"

QNvsbfbperm::QNvsbfbperm(std::uint8_t value) : Variable("Q_NVSBFBPERM", value) {}

QNvsbfbperm::QNvsbfbperm(const nlohmann::json & j, const std::string & order) : Variable("Q_NVSBFBPERM", j, order) {}