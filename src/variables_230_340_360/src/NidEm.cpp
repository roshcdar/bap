#include "../include/NidEm.hpp"

NidEm::NidEm(std::uint8_t value) : Variable("NID_EM", value) {}

NidEm::NidEm(const nlohmann::json & j, const std::string & order) : Variable("NID_EM", j, order) {}