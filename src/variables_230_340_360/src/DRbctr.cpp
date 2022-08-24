#include "../include/DRbctr.hpp"

DRbctr::DRbctr(std::uint16_t value) : Variable("D_RBCTR", value) {}

DRbctr::DRbctr(const nlohmann::json & j, const std::string & order) : Variable("D_RBCTR", j, order) {}