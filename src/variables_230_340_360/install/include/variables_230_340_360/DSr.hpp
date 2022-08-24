#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DSr : public Variable<std::uint16_t, 15> {
public:
    explicit DSr(std::uint16_t value = 0);
    explicit DSr(const nlohmann::json & j, const std::string & order = "");
};
