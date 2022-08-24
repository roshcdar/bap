#include "../include/MAxleloadcat.hpp"

MAxleloadcat::MAxleloadcat(std::uint8_t value) : Variable("M_AXLELOADCAT", value) {}

MAxleloadcat::MAxleloadcat(const nlohmann::json & j, const std::string & order) : Variable("M_AXLELOADCAT", j, order) {}