#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MNvebcl : public Variable<std::uint8_t, 4> {
public:
    explicit MNvebcl(std::uint8_t value = 0);
    explicit MNvebcl(const nlohmann::json & j, const std::string & order = "");
};
