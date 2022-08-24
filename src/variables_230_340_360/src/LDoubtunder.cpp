#include "../include/LDoubtunder.hpp"

LDoubtunder::LDoubtunder(std::uint16_t value) : Variable("L_DOUBTUNDER", value) {}

LDoubtunder::LDoubtunder(const nlohmann::json & j, const std::string & order) : Variable("L_DOUBTUNDER", j, order) {}