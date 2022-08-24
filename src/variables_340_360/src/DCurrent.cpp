#include "../include/DCurrent.hpp"

DCurrent::DCurrent(std::uint16_t value) : Variable("D_CURRENT", value) {}

DCurrent::DCurrent(const nlohmann::json & j, const std::string & order) : Variable("D_CURRENT", j, order) {}