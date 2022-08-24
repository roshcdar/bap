#include "../include/DNvstff.hpp"

DNvstff::DNvstff(std::uint16_t value) : Variable("D_NVSTFF", value) {}

DNvstff::DNvstff(const nlohmann::json & j, const std::string & order) : Variable("D_NVSTFF", j, order) {}