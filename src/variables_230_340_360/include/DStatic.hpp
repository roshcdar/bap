#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DStatic : public Variable<std::uint16_t, 15> {
public:
    explicit DStatic(std::uint16_t value = 0);
    explicit DStatic(const nlohmann::json & j, const std::string & order = "");
};
