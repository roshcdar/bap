#include "../include/MPosition.hpp"

MPosition::MPosition(std::uint32_t value) : Variable("M_POSITION", value) {}

MPosition::MPosition(const nlohmann::json & j, const std::string & order) : Variable("M_POSITION", j, order) {}