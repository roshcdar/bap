#include "../include/MAirtight.hpp"

MAirtight::MAirtight(std::uint8_t value) : Variable("M_AIRTIGHT", value) {}

MAirtight::MAirtight(const nlohmann::json & j, const std::string & order) : Variable("M_AIRTIGHT", j, order) {}