#include "../include/DLoc.hpp"

DLoc::DLoc(std::uint16_t value) : Variable("D_LOC", value) {}

DLoc::DLoc(const nlohmann::json & j, const std::string & order) : Variable("D_LOC", j, order) {}