#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DAdhesion : public Variable<std::uint16_t, 15> {
public:
    explicit DAdhesion(std::uint16_t value = 0);
    explicit DAdhesion(const nlohmann::json & j, const std::string & order = "");
};
