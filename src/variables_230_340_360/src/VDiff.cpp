#include "../include/VDiff.hpp"

VDiff::VDiff(std::uint8_t value) : Variable("V_DIFF", value) {}

VDiff::VDiff(const nlohmann::json & j, const std::string & order) : Variable("V_DIFF", j, order) {}