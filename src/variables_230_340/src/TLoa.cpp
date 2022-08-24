#include "../include/TLoa.hpp"

TLoa::TLoa(std::uint16_t value) : Variable("T_LOA", value) {}

TLoa::TLoa(const nlohmann::json & j, const std::string & order) : Variable("T_LOA", j, order) {}