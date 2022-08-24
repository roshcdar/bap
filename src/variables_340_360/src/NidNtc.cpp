#include "../include/NidNtc.hpp"

NidNtc::NidNtc(std::uint8_t value) : Variable("NID_NTC", value) {}

NidNtc::NidNtc(const nlohmann::json & j, const std::string & order) : Variable("NID_NTC", j, order) {}