#include "../include/QDlrbg.hpp"

QDlrbg::QDlrbg(std::uint8_t value) : Variable("Q_DLRBG", value) {}

QDlrbg::QDlrbg(const nlohmann::json & j, const std::string & order) : Variable("Q_DLRBG", j, order) {}