#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MVoltage : public Variable<std::uint8_t, 4> {
public:
    explicit MVoltage(std::uint8_t value = 0);
    explicit MVoltage(const nlohmann::json & j, const std::string & order = "");
};
