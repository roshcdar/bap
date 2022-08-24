#include "../include/TTrain.hpp"

TTrain::TTrain(std::uint32_t value) : Variable("T_TRAIN", value) {}

TTrain::TTrain(const nlohmann::json & j, const std::string & order) : Variable("T_TRAIN", j, order) {}