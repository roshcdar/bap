#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DOl : public Variable<std::uint16_t, 15> {
public:
    explicit DOl(std::uint16_t value = 0);
    explicit DOl(const nlohmann::json & j, const std::string & order = "");
};
