#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LAckmamode : public Variable<std::uint16_t, 15> {
public:
    explicit LAckmamode(std::uint16_t value = 0);
    explicit LAckmamode(const nlohmann::json & j, const std::string & order = "");
};
