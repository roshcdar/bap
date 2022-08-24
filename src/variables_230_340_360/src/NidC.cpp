#include "../include/NidC.hpp"

NidC::NidC(std::uint16_t value) : Variable("NID_C", value) {}

NidC::NidC(const nlohmann::json & j, const std::string & order) : Variable("NID_C", j, order) {}