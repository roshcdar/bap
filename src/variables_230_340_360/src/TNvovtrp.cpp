#include "../include/TNvovtrp.hpp"

TNvovtrp::TNvovtrp(std::uint8_t value) : Variable("T_NVOVTRP", value) {}

TNvovtrp::TNvovtrp(const nlohmann::json & j, const std::string & order) : Variable("T_NVOVTRP", j, order) {}