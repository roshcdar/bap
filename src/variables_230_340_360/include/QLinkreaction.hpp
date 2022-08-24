#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QLinkreaction : public Variable<std::uint8_t, 2> {
public:
    explicit QLinkreaction(std::uint8_t value = 0);
    explicit QLinkreaction(const nlohmann::json & j, const std::string & order = "");
};
