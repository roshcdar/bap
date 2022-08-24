#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class ANvp12 : public Variable<std::uint8_t, 6> {
public:
    explicit ANvp12(std::uint8_t value = 0);
    explicit ANvp12(const nlohmann::json & j, const std::string & order = "");
};
