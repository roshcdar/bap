#include "../include/QFront.hpp"

QFront::QFront(std::uint8_t value) : Variable("Q_FRONT", value) {}

QFront::QFront(const nlohmann::json & j, const std::string & order) : Variable("Q_FRONT", j, order) {}