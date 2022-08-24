#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DCycloc : public Variable<std::uint16_t, 15> {
public:
    explicit DCycloc(std::uint16_t value = 0);
    explicit DCycloc(const nlohmann::json & j, const std::string & order = "");
};
