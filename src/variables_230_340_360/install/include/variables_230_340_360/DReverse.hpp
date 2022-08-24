#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DReverse : public Variable<std::uint16_t, 15> {
public:
    explicit DReverse(std::uint16_t value = 0);
    explicit DReverse(const nlohmann::json & j, const std::string & order = "");
};
