#include "../include/DTrackinit.hpp"

DTrackinit::DTrackinit(std::uint16_t value) : Variable("D_TRACKINIT", value) {}

DTrackinit::DTrackinit(const nlohmann::json & j, const std::string & order) : Variable("D_TRACKINIT", j, order) {}