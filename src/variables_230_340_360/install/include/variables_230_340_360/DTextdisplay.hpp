#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DTextdisplay : public Variable<std::uint16_t, 15> {
public:
    explicit DTextdisplay(std::uint16_t value = 0);
    explicit DTextdisplay(const nlohmann::json & j, const std::string & order = "");
};
