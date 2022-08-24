#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LMamode : public Variable<std::uint16_t, 15> {
public:
    explicit LMamode(std::uint16_t value = 0);
    explicit LMamode(const nlohmann::json & j, const std::string & order = "");
};
