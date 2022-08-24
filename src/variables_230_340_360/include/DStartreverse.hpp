#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DStartreverse : public Variable<std::uint16_t, 15> {
public:
    explicit DStartreverse(std::uint16_t value = 0);
    explicit DStartreverse(const nlohmann::json & j, const std::string & order = "");
};
