#include "../include/DStatic.hpp"

DStatic::DStatic(std::uint16_t value) : Variable("D_STATIC", value) {}

DStatic::DStatic(const nlohmann::json & j, const std::string & order) : Variable("D_STATIC", j, order) {}