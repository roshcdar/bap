#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QNewcountry : public Variable<std::uint8_t, 1> {
public:
    explicit QNewcountry(std::uint8_t value = 0);
    explicit QNewcountry(const nlohmann::json & j, const std::string & order = "");
};
