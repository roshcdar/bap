#include "../include/DAxleload.hpp"

DAxleload::DAxleload(std::uint16_t value) : Variable("D_AXLELOAD", value) {}

DAxleload::DAxleload(const nlohmann::json & j, const std::string & order) : Variable("D_AXLELOAD", j, order) {}