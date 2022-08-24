#include "../include/LTrain.hpp"

LTrain::LTrain(std::uint16_t value) : Variable("L_TRAIN", value) {}

LTrain::LTrain(const nlohmann::json & j, const std::string & order) : Variable("L_TRAIN", j, order) {}