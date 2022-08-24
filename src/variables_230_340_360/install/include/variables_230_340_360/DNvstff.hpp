#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DNvstff : public Variable<std::uint16_t, 15> {
public:
    explicit DNvstff(std::uint16_t value = 0);
    explicit DNvstff(const nlohmann::json & j, const std::string & order = "");
};
