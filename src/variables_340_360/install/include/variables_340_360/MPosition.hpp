#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MPosition : public Variable<std::uint32_t, 24> {
public:
    explicit MPosition(std::uint32_t value = 0);
    explicit MPosition(const nlohmann::json & j, const std::string & order = "");
};
