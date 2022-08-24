#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MMamode : public Variable<std::uint8_t, 2> {
public:
    explicit MMamode(std::uint8_t value = 0);
    explicit MMamode(const nlohmann::json & j, const std::string & order = "");
};
