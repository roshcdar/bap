#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QLength : public Variable<std::uint8_t, 2> {
public:
    explicit QLength(std::uint8_t value = 0);
    explicit QLength(const nlohmann::json & j, const std::string & order = "");
};
