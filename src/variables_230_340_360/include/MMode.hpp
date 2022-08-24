#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MMode : public Variable<std::uint8_t, 4> {
public:
    explicit MMode(std::uint8_t value = 0);
    explicit MMode(const nlohmann::json & j, const std::string & order = "");
};
