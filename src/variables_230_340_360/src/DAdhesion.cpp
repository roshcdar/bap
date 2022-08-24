#include "../include/DAdhesion.hpp"

DAdhesion::DAdhesion(std::uint16_t value) : Variable("D_ADHESION", value) {}

DAdhesion::DAdhesion(const nlohmann::json & j, const std::string & order) : Variable("D_ADHESION", j, order) {}