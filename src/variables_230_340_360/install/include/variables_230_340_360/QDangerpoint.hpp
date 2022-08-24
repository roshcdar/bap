#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QDangerpoint : public Variable<std::uint8_t, 1> {
public:
    explicit QDangerpoint(std::uint8_t value = 0);
    explicit QDangerpoint(const nlohmann::json & j, const std::string & order = "");
};
