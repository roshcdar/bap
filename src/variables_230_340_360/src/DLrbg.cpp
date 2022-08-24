#include "../include/DLrbg.hpp"

DLrbg::DLrbg(std::uint16_t value) : Variable("D_LRBG", value) {}

DLrbg::DLrbg(const nlohmann::json & j, const std::string & order) : Variable("D_LRBG", j, order) {}