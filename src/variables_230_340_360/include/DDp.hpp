#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DDp : public Variable<std::uint16_t, 15> {
public:
    explicit DDp(std::uint16_t value = 0);
    explicit DDp(const nlohmann::json & j, const std::string & order = "");
};
