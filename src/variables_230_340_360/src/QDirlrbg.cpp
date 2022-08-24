#include "../include/QDirlrbg.hpp"

QDirlrbg::QDirlrbg(std::uint8_t value) : Variable("Q_DIRLRBG", value) {}

QDirlrbg::QDirlrbg(const nlohmann::json & j, const std::string & order) : Variable("Q_DIRLRBG", j, order) {}