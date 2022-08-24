#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VStatic : public Variable<std::uint8_t, 7> {
public:
    explicit VStatic(std::uint8_t value = 0);
    explicit VStatic(const nlohmann::json & j, const std::string & order = "");
};
