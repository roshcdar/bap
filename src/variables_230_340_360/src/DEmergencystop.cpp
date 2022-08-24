#include "../include/DEmergencystop.hpp"

DEmergencystop::DEmergencystop(std::uint16_t value) : Variable("D_EMERGENCYSTOP", value) {}

DEmergencystop::DEmergencystop(const nlohmann::json & j, const std::string & order) : Variable("D_EMERGENCYSTOP", j, order) {}