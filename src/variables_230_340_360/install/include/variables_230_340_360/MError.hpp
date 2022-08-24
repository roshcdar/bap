#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MError : public Variable<std::uint8_t, 8> {
public:
    explicit MError(std::uint8_t value = 0);
    explicit MError(const nlohmann::json & j, const std::string & order = "");
};
