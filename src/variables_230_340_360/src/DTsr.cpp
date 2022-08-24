#include "../include/DTsr.hpp"

DTsr::DTsr(std::uint16_t value) : Variable("D_TSR", value) {}

DTsr::DTsr(const nlohmann::json & j, const std::string & order) : Variable("D_TSR", j, order) {}