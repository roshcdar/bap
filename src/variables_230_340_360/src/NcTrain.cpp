#include "../include/NcTrain.hpp"

NcTrain::NcTrain(std::uint16_t value) : Variable("NC_TRAIN", value) {}

NcTrain::NcTrain(const nlohmann::json & j, const std::string & order) : Variable("NC_TRAIN", j, order) {}