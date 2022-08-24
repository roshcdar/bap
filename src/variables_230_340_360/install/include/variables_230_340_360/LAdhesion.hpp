#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LAdhesion : public Variable<std::uint16_t, 15> {
public:
    explicit LAdhesion(std::uint16_t value = 0);
    explicit LAdhesion(const nlohmann::json & j, const std::string & order = "");
};
