#include "../include/MPlatform.hpp"

MPlatform::MPlatform(std::uint8_t value) : Variable("M_PLATFORM", value) {}

MPlatform::MPlatform(const nlohmann::json & j, const std::string & order) : Variable("M_PLATFORM", j, order) {}