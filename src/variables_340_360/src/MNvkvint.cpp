#include "../include/MNvkvint.hpp"

MNvkvint::MNvkvint(std::uint8_t value) : Variable("M_NVKVINT", value) {}

MNvkvint::MNvkvint(const nlohmann::json & j, const std::string & order) : Variable("M_NVKVINT", j, order) {}