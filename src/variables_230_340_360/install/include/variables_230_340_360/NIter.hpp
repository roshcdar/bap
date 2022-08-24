#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NIter : public Variable<std::uint8_t, 5> {
public:
    explicit NIter(std::uint8_t value);
    explicit NIter(const nlohmann::json & j, const std::string & order = "");
};
