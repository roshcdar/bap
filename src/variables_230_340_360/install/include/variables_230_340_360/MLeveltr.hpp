#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MLeveltr : public Variable<std::uint8_t, 3> {
public:
    explicit MLeveltr(std::uint8_t value = 0);
    explicit MLeveltr(const nlohmann::json & j, const std::string & order = "");
};
