#include "../include/TEma.hpp"

TEma::TEma(std::uint16_t value) : Variable("T_EMA", value) {}

TEma::TEma(const nlohmann::json & j, const std::string & order) : Variable("T_EMA", j, order) {}