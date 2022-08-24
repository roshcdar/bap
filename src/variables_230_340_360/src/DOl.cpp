#include "../include/DOl.hpp"

DOl::DOl(std::uint16_t value) : Variable("D_OL", value) {}

DOl::DOl(const nlohmann::json & j, const std::string & order) : Variable("D_OL", j, order) {}