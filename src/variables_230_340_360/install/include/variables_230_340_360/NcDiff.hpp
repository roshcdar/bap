#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NcDiff : public Variable<std::uint8_t, 4> {
public:
    explicit NcDiff(std::uint8_t value = 0);
    explicit NcDiff(const nlohmann::json & j, const std::string & order = "");
};
