#include "../include/VReleaseol.hpp"

VReleaseol::VReleaseol(std::uint8_t value) : Variable("V_RELEASEOL", value) {}

VReleaseol::VReleaseol(const nlohmann::json & j, const std::string & order) : Variable("V_RELEASEOL", j, order) {}