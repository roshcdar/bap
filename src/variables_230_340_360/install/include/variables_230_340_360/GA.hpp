#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class GA : public Variable<std::uint8_t, 8> {
public:
    explicit GA(std::uint8_t value = 0);
    explicit GA(const nlohmann::json & j, const std::string & order = "");
};
