#include "../include/NidCtraction.hpp"

NidCtraction::NidCtraction(std::uint16_t value) : Variable("NID_CTRACTION", value) {}

NidCtraction::NidCtraction(const nlohmann::json & j, const std::string & order) : Variable("NID_CTRACTION", j, order) {}