#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class LLx : public Variable<std::uint16_t, 15> {
public:
    explicit LLx(std::uint16_t value = 0);
    explicit LLx(const nlohmann::json & j, const std::string & order = "");
};
