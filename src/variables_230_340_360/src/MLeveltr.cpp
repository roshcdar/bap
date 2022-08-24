#include "../include/MLeveltr.hpp"

MLeveltr::MLeveltr(std::uint8_t value) : Variable("M_LEVELTR", value) {}

MLeveltr::MLeveltr(const nlohmann::json & j, const std::string & order) : Variable("M_LEVELTR", j, order) {}