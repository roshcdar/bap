#include "../include/DLx.hpp"

DLx::DLx(std::uint16_t value) : Variable("D_LX", value) {}

DLx::DLx(const nlohmann::json & j, const std::string & order) : Variable("D_LX", j, order) {}