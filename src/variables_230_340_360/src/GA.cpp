#include "../include/GA.hpp"

GA::GA(std::uint8_t value) : Variable("G_A", value) {}

GA::GA(const nlohmann::json & j, const std::string & order) : Variable("G_A", j, order) {}