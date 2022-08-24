#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class LStoplx : public Variable<std::uint16_t, 15> {
public:
    explicit LStoplx(std::uint16_t value = 0);
    explicit LStoplx(const nlohmann::json & j, const std::string & order = "");
};
