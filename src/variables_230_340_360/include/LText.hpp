#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LText : public Variable<std::uint8_t, 8> {
public:
    explicit LText(std::uint8_t value = 0);
    explicit LText(const nlohmann::json & j, const std::string & order = "");
};
