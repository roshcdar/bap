#include "../include/MNvebcl.hpp"

MNvebcl::MNvebcl(std::uint8_t value) : Variable("M_NVEBCL", value) {}

MNvebcl::MNvebcl(const nlohmann::json & j, const std::string & order) : Variable("M_NVEBCL", j, order) {}