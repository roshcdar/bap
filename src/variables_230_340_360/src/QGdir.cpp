#include "../include/QGdir.hpp"

QGdir::QGdir(std::uint8_t value) : Variable("Q_GDIR", value) {}

QGdir::QGdir(const nlohmann::json & j, const std::string & order) : Variable("Q_GDIR", j, order) {}