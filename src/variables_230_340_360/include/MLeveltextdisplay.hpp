#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MLeveltextdisplay : public Variable<std::uint8_t, 3> {
public:
    explicit MLeveltextdisplay(std::uint8_t value = 0);
    explicit MLeveltextdisplay(const nlohmann::json & j, const std::string & order = "");
};
