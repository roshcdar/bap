#include "../include/GPbdsr.hpp"

GPbdsr::GPbdsr(std::uint8_t value) : Variable("G_PBDSR", value) {}

GPbdsr::GPbdsr(const nlohmann::json & j, const std::string & order) : Variable("G_PBDSR", j, order) {}