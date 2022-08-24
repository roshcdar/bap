#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NAxle : public Variable<std::uint16_t, 10> {
public:
    explicit NAxle(std::uint16_t value = 0);
    explicit NAxle(const nlohmann::json & j, const std::string & order = "");
};
