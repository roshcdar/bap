#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DLeveltr : public Variable<std::uint16_t, 15> {
public:
    explicit DLeveltr(std::uint16_t value = 0);
    explicit DLeveltr(const nlohmann::json & j, const std::string & order = "");
};
