#include "../include/DNvpotrp.hpp"

DNvpotrp::DNvpotrp(std::uint16_t value) : Variable("D_NVPOTRP", value) {}

DNvpotrp::DNvpotrp(const nlohmann::json & j, const std::string & order) : Variable("D_NVPOTRP", j, order) {}