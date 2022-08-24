#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DEndtimerstartloc : public Variable<std::uint16_t, 15> {
public:
    explicit DEndtimerstartloc(std::uint16_t value = 0);
    explicit DEndtimerstartloc(const nlohmann::json & j, const std::string & order = "");
};
