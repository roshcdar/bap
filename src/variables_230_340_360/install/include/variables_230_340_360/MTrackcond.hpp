#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MTrackcond : public Variable<std::uint8_t, 4> {
public:
    explicit MTrackcond(std::uint8_t value = 0);
    explicit MTrackcond(const nlohmann::json & j, const std::string & order = "");
};
