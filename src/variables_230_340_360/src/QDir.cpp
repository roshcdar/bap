#include "../include/QDir.hpp"

QDir::QDir(std::uint8_t value) : Variable("Q_DIR", value) {}

QDir::QDir(const nlohmann::json & j, const std::string & order) : Variable("Q_DIR", j, order) {}