#include "../include/NidStm.hpp"

NidStm::NidStm(std::uint8_t value) : Variable("NID_STM", value) {}

NidStm::NidStm(const nlohmann::json & j, const std::string & order) : Variable("NID_STM", j, order) {}