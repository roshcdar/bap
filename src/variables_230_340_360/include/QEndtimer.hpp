#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QEndtimer : public Variable<std::uint8_t, 1> {
public:
    explicit QEndtimer(std::uint8_t value = 0);
    explicit QEndtimer(const nlohmann::json & j, const std::string & order = "");
};
