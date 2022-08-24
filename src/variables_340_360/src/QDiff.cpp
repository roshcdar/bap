#include "../include/QDiff.hpp"

QDiff::QDiff(std::uint8_t value) : Variable("Q_DIFF", value) {}

QDiff::QDiff(const nlohmann::json & j, const std::string & order) : Variable("Q_DIFF", j, order) {}