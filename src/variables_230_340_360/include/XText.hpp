#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class XText : public Variable<std::uint8_t, 8> {
public:
    explicit XText(std::uint8_t value = 0);
    explicit XText(const nlohmann::json & j, const std::string & order = "");
};
