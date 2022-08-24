#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LTrackcond : public Variable<std::uint16_t, 15> {
public:
    explicit LTrackcond(std::uint16_t value = 0);
    explicit LTrackcond(const nlohmann::json & j, const std::string & order = "");
};
