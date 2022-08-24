#include "../include/TOl.hpp"

TOl::TOl(std::uint16_t value) : Variable("T_OL", value) {}

TOl::TOl(const nlohmann::json & j, const std::string & order) : Variable("T_OL", j, order) {}