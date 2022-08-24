#include "../include/MError.hpp"

MError::MError(std::uint8_t value) : Variable("M_ERROR", value) {}

MError::MError(const nlohmann::json & j, const std::string & order) : Variable("M_ERROR", j, order) {}