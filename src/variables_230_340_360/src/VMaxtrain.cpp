#include "../include/VMaxtrain.hpp"

VMaxtrain::VMaxtrain(std::uint8_t value) : Variable("V_MAXTRAIN", value) {}

VMaxtrain::VMaxtrain(const nlohmann::json & j, const std::string & order) : Variable("V_MAXTRAIN", j, order) {}