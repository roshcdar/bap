#include "../include/NcCdtrain.hpp"

NcCdtrain::NcCdtrain(std::uint8_t value) : Variable("NC_CDTRAIN", value) {}

NcCdtrain::NcCdtrain(const nlohmann::json & j, const std::string & order) : Variable("NC_CDTRAIN", j, order) {}