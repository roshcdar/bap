#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TCycloc : public Variable<std::uint8_t, 8> {
public:
    explicit TCycloc(std::uint8_t value = 0);
    explicit TCycloc(const nlohmann::json & j, const std::string & order = "");
};
