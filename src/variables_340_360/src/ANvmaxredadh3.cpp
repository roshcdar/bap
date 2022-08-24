#include "../include/ANvmaxredadh3.hpp"

ANvmaxredadh3::ANvmaxredadh3(std::uint8_t value) : Variable("A_NVMAXREDADH3", value) {}

ANvmaxredadh3::ANvmaxredadh3(const nlohmann::json & j, const std::string & order) : Variable("A_NVMAXREDADH3", j, order) {}