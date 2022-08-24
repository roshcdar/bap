#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MLevel : public Variable<std::uint8_t, 3> {
public:
    explicit MLevel(std::uint8_t value = 0);
    explicit MLevel(const nlohmann::json & j, const std::string & order = "");
};
