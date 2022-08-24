#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TTrain : public Variable<std::uint32_t, 32> {
public:
    explicit TTrain(std::uint32_t value = 0);
    explicit TTrain(const nlohmann::json & j, const std::string & order = "");
};
