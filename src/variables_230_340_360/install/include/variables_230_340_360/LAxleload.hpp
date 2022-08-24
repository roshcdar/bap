#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LAxleload : public Variable<std::uint16_t, 15> {
public:
    explicit LAxleload(std::uint16_t value = 0);
    explicit LAxleload(const nlohmann::json & j, const std::string & order = "");
};
