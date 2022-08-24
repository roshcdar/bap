#include "../include/DLeveltr.hpp"

DLeveltr::DLeveltr(std::uint16_t value) : Variable("D_LEVELTR", value) {}

DLeveltr::DLeveltr(const nlohmann::json & j, const std::string & order) : Variable("D_LEVELTR", j, order) {}