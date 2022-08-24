#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VNvallowovtrp : public Variable<std::uint8_t, 7> {
public:
    explicit VNvallowovtrp(std::uint8_t value = 0);
    explicit VNvallowovtrp(const nlohmann::json & j, const std::string & order = "");
};
