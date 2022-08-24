#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DTraction : public Variable<std::uint16_t, 15> {
public:
    explicit DTraction(std::uint16_t value = 0);
    explicit DTraction(const nlohmann::json & j, const std::string & order = "");
};
