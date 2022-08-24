#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QScale : public Variable<std::uint8_t, 2> {
public:
    explicit QScale(std::uint8_t value = 0);
    explicit QScale(const nlohmann::json & j, const std::string & order = "");
};
