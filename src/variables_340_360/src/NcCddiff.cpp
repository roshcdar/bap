#include "../include/NcCddiff.hpp"

NcCddiff::NcCddiff(std::uint8_t value) : Variable("NC_CDDIFF", value) {}

NcCddiff::NcCddiff(const nlohmann::json & j, const std::string & order) : Variable("NC_CDDIFF", j, order) {}