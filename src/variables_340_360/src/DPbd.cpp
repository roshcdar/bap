#include "../include/DPbd.hpp"

DPbd::DPbd(std::uint16_t value) : Variable("D_PBD", value) {}

DPbd::DPbd(const nlohmann::json & j, const std::string & order) : Variable("D_PBD", j, order) {}