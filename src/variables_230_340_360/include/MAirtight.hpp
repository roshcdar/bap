#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MAirtight : public Variable<std::uint8_t, 2> {
public:
    explicit MAirtight(std::uint8_t value = 0);
    explicit MAirtight(const nlohmann::json & j, const std::string & order = "");
};
