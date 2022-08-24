#include "../include/DGradient.hpp"

DGradient::DGradient(std::uint16_t value) : Variable("D_GRADIENT", value) {}

DGradient::DGradient(const nlohmann::json & j, const std::string & order) : Variable("D_GRADIENT", j, order) {}