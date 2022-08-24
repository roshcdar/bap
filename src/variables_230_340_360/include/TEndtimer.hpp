#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TEndtimer : public Variable<std::uint16_t, 10> {
public:
    explicit TEndtimer(std::uint16_t value = 0);
    explicit TEndtimer(const nlohmann::json & j, const std::string & order = "");
};
