#include "../include/ANvmaxredadh2.hpp"

ANvmaxredadh2::ANvmaxredadh2(std::uint8_t value) : Variable("A_NVMAXREDADH2", value) {}

ANvmaxredadh2::ANvmaxredadh2(const nlohmann::json & j, const std::string & order) : Variable("A_NVMAXREDADH2", j, order) {}