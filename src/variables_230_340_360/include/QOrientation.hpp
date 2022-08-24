#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QOrientation : public Variable<std::uint8_t, 1> {
public:
    explicit QOrientation(std::uint8_t value = 0);
    explicit QOrientation(const nlohmann::json & j, const std::string & order = "");
};
