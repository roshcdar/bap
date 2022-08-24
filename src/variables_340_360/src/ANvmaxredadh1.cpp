#include "../include/ANvmaxredadh1.hpp"

ANvmaxredadh1::ANvmaxredadh1(std::uint8_t value) : Variable("A_NVMAXREDADH1", value) {}

ANvmaxredadh1::ANvmaxredadh1(const nlohmann::json & j, const std::string & order) : Variable("A_NVMAXREDADH1", j, order) {}