#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DMamode: public Variable<std::uint16_t, 15> {
public:
    explicit DMamode(std::uint16_t value = 0);
    explicit DMamode(const nlohmann::json & j, const std::string & order = "");
};
