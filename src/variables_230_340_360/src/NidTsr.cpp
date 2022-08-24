#include "../include/NidTsr.hpp"

NidTsr::NidTsr(std::uint8_t value) : Variable("NID_TSR", value) {}

NidTsr::NidTsr(const nlohmann::json & j, const std::string & order) : Variable("NID_TSR", j, order) {}