#include "../include/VLoa.hpp"

VLoa::VLoa(std::uint8_t value) : Variable("V_LOA", value) {}

VLoa::VLoa(const nlohmann::json & j, const std::string & order) : Variable("V_LOA", j, order) {}