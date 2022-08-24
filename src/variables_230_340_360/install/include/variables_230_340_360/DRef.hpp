#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DRef : public Variable<std::int16_t, 15> {
public:
    explicit DRef(std::int16_t value = 0);
    explicit DRef(const nlohmann::json & j, const std::string & order = "");
};
