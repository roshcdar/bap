#include "../include/NidRbc.hpp"

NidRbc::NidRbc(std::uint16_t value) : Variable("NID_RBC", value) {}

NidRbc::NidRbc(const nlohmann::json & j, const std::string & order) : Variable("NID_RBC", j, order) {}