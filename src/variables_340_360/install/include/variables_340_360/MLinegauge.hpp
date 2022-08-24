#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MLinegauge : public Variable<std::uint8_t, 8> {
public:
    explicit MLinegauge(std::uint8_t value = 0);
    explicit MLinegauge(const nlohmann::json & j, const std::string & order = "");
};
