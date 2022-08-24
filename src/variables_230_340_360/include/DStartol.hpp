#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DStartol : public Variable<std::uint16_t, 15> {
public:
    explicit DStartol(std::uint16_t value = 0);
    explicit DStartol(const nlohmann::json & j, const std::string & order = "");
};
