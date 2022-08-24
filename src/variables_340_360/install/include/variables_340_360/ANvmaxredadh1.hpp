#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class ANvmaxredadh1 : public Variable<std::uint8_t, 6> {
public:
    explicit ANvmaxredadh1(std::uint8_t value = 0);
    explicit ANvmaxredadh1(const nlohmann::json & j, const std::string & order = "");
};
