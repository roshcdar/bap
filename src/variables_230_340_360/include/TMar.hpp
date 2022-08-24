#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TMar : public Variable<std::uint8_t, 8> {
public:
    explicit TMar(std::uint8_t value = 0);
    explicit TMar(const nlohmann::json & j, const std::string & order = "");
};
