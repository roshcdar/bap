#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DSectiontimerstoploc : public Variable<std::uint16_t, 15> {
public:
    explicit DSectiontimerstoploc(std::uint16_t value = 0);
    explicit DSectiontimerstoploc(const nlohmann::json & j, const std::string & order = "");
};
