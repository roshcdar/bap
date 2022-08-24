#include "../include/MNvktint.hpp"

MNvktint::MNvktint(std::uint8_t value) : Variable("M_NVKTINT", value) {}

MNvktint::MNvktint(const nlohmann::json & j, const std::string & order) : Variable("M_NVKTINT", j, order) {}