#include "../include/DStartreverse.hpp"

DStartreverse::DStartreverse(std::uint16_t value) : Variable("D_STARTREVERSE", value) {}

DStartreverse::DStartreverse(const nlohmann::json & j, const std::string & order) : Variable("D_STARTREVERSE", j, order) {}