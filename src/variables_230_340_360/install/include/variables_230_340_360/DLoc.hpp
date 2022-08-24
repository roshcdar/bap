#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DLoc : public Variable<std::uint16_t, 15> {
public:
    explicit DLoc(std::uint16_t value = 0);
    explicit DLoc(const nlohmann::json & j, const std::string & order = "");
};
