#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MLoadinggauge : public Variable<std::uint8_t, 8> {
public:
    explicit MLoadinggauge(std::uint8_t value = 0);
    explicit MLoadinggauge(const nlohmann::json & j, const std::string & order = "");
};
