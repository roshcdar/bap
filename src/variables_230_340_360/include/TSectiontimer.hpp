#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TSectiontimer : public Variable<std::uint16_t, 10> {
public:
    explicit TSectiontimer(std::uint16_t value = 0);
    explicit TSectiontimer(const nlohmann::json & j, const std::string & order = "");
};
