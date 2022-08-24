#include "../include/MVersion.hpp"

MVersion::MVersion(std::uint8_t value) : Variable("M_VERSION", value) {}

MVersion::MVersion(const nlohmann::json & j, const std::string & order) : Variable("M_VERSION", j, order) {}