#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TNvcontact : public Variable<std::uint8_t, 8> {
public:
    explicit TNvcontact(std::uint8_t value = 0);
    explicit TNvcontact(const nlohmann::json & j, const std::string & order = "");
};
