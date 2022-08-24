#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TTextdisplay : public Variable<std::uint16_t, 10> {
public:
    explicit TTextdisplay(std::uint16_t value = 0);
    explicit TTextdisplay(const nlohmann::json & j, const std::string & order = "");
};
