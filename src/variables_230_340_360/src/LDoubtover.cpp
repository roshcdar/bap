#include "../include/LDoubtover.hpp"

LDoubtover::LDoubtover(std::uint16_t value) : Variable("L_DOUBTOVER", value) {}

LDoubtover::LDoubtover(const nlohmann::json & j, const std::string & order) : Variable("L_DOUBTOVER", j, order) {}