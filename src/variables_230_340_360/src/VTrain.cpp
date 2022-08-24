#include "../include/VTrain.hpp"

VTrain::VTrain(std::uint8_t value) : Variable("V_TRAIN", value) {}

VTrain::VTrain(const nlohmann::json & j, const std::string & order) : Variable("V_TRAIN", j, order) {}