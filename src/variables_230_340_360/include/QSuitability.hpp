#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QSuitability : public Variable<std::uint8_t, 2> {
public:
    explicit QSuitability(std::uint8_t value = 0);
    explicit QSuitability(const nlohmann::json & j, const std::string & order = "");
};
