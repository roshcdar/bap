#include "../include/QDirtrain.hpp"

QDirtrain::QDirtrain(std::uint8_t value) : Variable("Q_DIRTRAIN", value) {}

QDirtrain::QDirtrain(const nlohmann::json & j, const std::string & order) : Variable("Q_DIRTRAIN", j, order) {}