#include "../include/VReleasedp.hpp"

VReleasedp::VReleasedp(std::uint8_t value) : Variable("V_RELEASEDP", value) {}

VReleasedp::VReleasedp(const nlohmann::json & j, const std::string & order) : Variable("V_RELEASEDP", j, order) {}