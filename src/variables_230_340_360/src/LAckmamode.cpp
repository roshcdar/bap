#include "../include/LAckmamode.hpp"

LAckmamode::LAckmamode(std::uint16_t value) : Variable("L_ACKMAMODE", value) {}

LAckmamode::LAckmamode(const nlohmann::json & j, const std::string & order) : Variable("L_ACKMAMODE", j, order) {}