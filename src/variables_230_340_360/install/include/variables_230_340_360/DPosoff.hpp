#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DPosoff : public Variable<std::uint16_t, 15> {
public:
    explicit DPosoff(std::uint16_t value = 0);
    explicit DPosoff(const nlohmann::json & j, const std::string & order = "");
};
