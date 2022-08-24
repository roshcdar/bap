#include "../include/NcDiff.hpp"

NcDiff::NcDiff(std::uint8_t value) : Variable("NC_DIFF", value) {}

NcDiff::NcDiff(const nlohmann::json & j, const std::string & order) : Variable("NC_DIFF", j, order) {}