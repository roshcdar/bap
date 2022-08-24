#include "../include/NAxle.hpp"

NAxle::NAxle(std::uint16_t value) : Variable("N_AXLE", value) {}

NAxle::NAxle(const nlohmann::json & j, const std::string & order) : Variable("N_AXLE", j, order) {}