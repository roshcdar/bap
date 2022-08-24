#include "../include/DStartol.hpp"

DStartol::DStartol(std::uint16_t value) : Variable("D_STARTOL", value) {}

DStartol::DStartol(const nlohmann::json & j, const std::string & order) : Variable("D_STARTOL", j, order) {}