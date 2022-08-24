#include "../include/QNvsbtsmperm.hpp"

QNvsbtsmperm::QNvsbtsmperm(std::uint8_t value) : Variable("Q_NVSBTSMPERM", value) {}

QNvsbtsmperm::QNvsbtsmperm(const nlohmann::json & j, const std::string & order) : Variable("Q_NVSBTSMPERM", j, order) {}