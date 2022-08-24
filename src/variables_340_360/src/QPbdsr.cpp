#include "../include/QPbdsr.hpp"

QPbdsr::QPbdsr(std::uint8_t value) : Variable("Q_PBDSR", value) {}

QPbdsr::QPbdsr(const nlohmann::json & j, const std::string & order) : Variable("Q_PBDSR", j, order) {}