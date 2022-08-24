#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class DCurrent : public Variable<std::uint16_t, 15> {
public:
    explicit DCurrent(std::uint16_t value = 0);
    explicit DCurrent(const nlohmann::json & j, const std::string & order = "");
};
