#include "../include/DNvovtrp.hpp"

DNvovtrp::DNvovtrp(std::uint16_t value) : Variable("D_NVOVTRP", value) {}

DNvovtrp::DNvovtrp(const nlohmann::json & j, const std::string & order) : Variable("D_NVOVTRP", j, order) {}