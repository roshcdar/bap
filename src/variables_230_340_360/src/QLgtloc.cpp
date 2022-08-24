#include "../include/QLgtloc.hpp"

QLgtloc::QLgtloc(std::uint8_t value) : Variable("Q_LGTLOC", value) {}

QLgtloc::QLgtloc(const nlohmann::json & j, const std::string & order) : Variable("Q_LGTLOC", j, order) {}