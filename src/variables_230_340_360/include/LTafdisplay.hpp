#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LTafdisplay : public Variable<std::uint16_t, 15> {
public:
    explicit LTafdisplay(std::uint16_t value = 0);
    explicit LTafdisplay(const nlohmann::json & j, const std::string & order = "");
};
