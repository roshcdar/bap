#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QText : public Variable<std::uint8_t, 8> {
public:
    explicit QText(std::uint8_t value = 0);
    explicit QText(const nlohmann::json & j, const std::string & order = "");
};
