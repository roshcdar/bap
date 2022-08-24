#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MNvktint : public Variable<std::uint8_t, 5> {
public:
    explicit MNvktint(std::uint8_t value = 0);
    explicit MNvktint(const nlohmann::json & j, const std::string & order = "");
};
