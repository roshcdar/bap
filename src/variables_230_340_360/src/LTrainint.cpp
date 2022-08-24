#include "../include/LTrainint.hpp"

LTrainint::LTrainint(std::uint16_t value) : Variable("L_TRAININT", value) {}

LTrainint::LTrainint(const nlohmann::json & j, const std::string & order) : Variable("L_TRAININT", j, order) {}