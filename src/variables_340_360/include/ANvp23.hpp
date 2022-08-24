#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class ANvp23 : public Variable<std::uint8_t, 6> {
public:
    explicit ANvp23(std::uint8_t value = 0);
    explicit ANvp23(const nlohmann::json & j, const std::string & order = "");
};
