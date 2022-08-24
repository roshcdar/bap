#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TCycrqst : public Variable<std::uint8_t, 8> {
public:
    explicit TCycrqst(std::uint8_t value = 0);
    explicit TCycrqst(const nlohmann::json & j, const std::string & order = "");
};
