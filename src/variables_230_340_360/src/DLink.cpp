#include "../include/DLink.hpp"

DLink::DLink(std::uint16_t value) : Variable("D_LINK", value) {}

DLink::DLink(const nlohmann::json & j, const std::string & order) : Variable("D_LINK", j, order) {}