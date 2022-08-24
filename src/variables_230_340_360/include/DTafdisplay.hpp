#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DTafdisplay : public Variable<std::uint16_t, 15> {
public:
    explicit DTafdisplay(std::uint16_t value = 0);
    explicit DTafdisplay(const nlohmann::json & j, const std::string & order = "");
};
