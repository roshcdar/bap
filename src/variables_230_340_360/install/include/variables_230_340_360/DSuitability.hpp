#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DSuitability : public Variable<std::uint16_t, 15> {
public:
    explicit DSuitability(std::uint16_t value = 0);
    explicit DSuitability(const nlohmann::json & j, const std::string & order = "");
};
