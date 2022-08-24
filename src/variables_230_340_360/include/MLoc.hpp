#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MLoc : public Variable<std::uint8_t, 3> {
public:
    explicit MLoc(std::uint8_t value = 0);
    explicit MLoc(const nlohmann::json & j, const std::string & order = "");
};
