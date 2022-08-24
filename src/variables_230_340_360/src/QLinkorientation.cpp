#include "../include/QLinkorientation.hpp"

QLinkorientation::QLinkorientation(std::uint8_t value) : Variable("Q_LINKORIENTATION", value) {}

QLinkorientation::QLinkorientation(const nlohmann::json & j, const std::string & order) : Variable("Q_LINKORIENTATION", j, order) {}