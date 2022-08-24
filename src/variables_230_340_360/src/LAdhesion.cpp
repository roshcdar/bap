#include "../include/LAdhesion.hpp"

LAdhesion::LAdhesion(std::uint16_t value) : Variable("L_ADHESION", value) {}

LAdhesion::LAdhesion(const nlohmann::json & j, const std::string & order) : Variable("L_ADHESION", j, order) {}