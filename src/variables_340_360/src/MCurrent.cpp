#include "../include/MCurrent.hpp"

MCurrent::MCurrent(std::uint16_t value) : Variable("M_CURRENT", value) {}

MCurrent::MCurrent(const nlohmann::json & j, const std::string & order) : Variable("M_CURRENT", j, order) {}