#include "../include/MAdhesion.hpp"

MAdhesion::MAdhesion(std::uint8_t value) : Variable("M_ADHESION", value) {}

MAdhesion::MAdhesion(const nlohmann::json & j, const std::string & order) : Variable("M_ADHESION", j, order) {}