#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LTextdisplay : public Variable<std::uint16_t, 15> {
public:
    explicit LTextdisplay(std::uint16_t value = 0);
    explicit LTextdisplay(const nlohmann::json & j, const std::string & order = "");
};
