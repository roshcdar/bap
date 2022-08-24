#include "../include/NIter.hpp"

NIter::NIter(std::uint8_t value) : Variable("N_ITER", value) {}

NIter::NIter(const nlohmann::json & j, const std::string & order) : Variable("N_ITER", j, order) {}