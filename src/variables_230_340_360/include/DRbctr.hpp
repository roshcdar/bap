#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DRbctr : public Variable<std::uint16_t, 15> {
public:
    explicit DRbctr(std::uint16_t value = 0);
    explicit DRbctr(const nlohmann::json & j, const std::string & order = "");
};
