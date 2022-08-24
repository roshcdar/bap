#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MAdhesion : public Variable<std::uint8_t, 1> {
public:
    explicit MAdhesion(std::uint8_t value = 0);
    explicit MAdhesion(const nlohmann::json & j, const std::string & order = "");
};
