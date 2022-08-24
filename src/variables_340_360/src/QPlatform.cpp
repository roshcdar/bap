#include "../include/QPlatform.hpp"

QPlatform::QPlatform(std::uint8_t value) : Variable("Q_PLATFORM", value) {}

QPlatform::QPlatform(const nlohmann::json & j, const std::string & order) : Variable("Q_PLATFORM", j, order) {}