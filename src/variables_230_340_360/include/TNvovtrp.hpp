#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TNvovtrp : public Variable<std::uint8_t, 8> {
public:
    explicit TNvovtrp(std::uint8_t value = 0);
    explicit TNvovtrp(const nlohmann::json & j, const std::string & order = "");
};
