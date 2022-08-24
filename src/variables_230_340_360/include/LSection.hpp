#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LSection : public Variable<std::uint16_t, 15> {
public:
    explicit LSection(std::uint16_t value = 0);
    explicit LSection(const nlohmann::json & j, const std::string & order = "");
};
