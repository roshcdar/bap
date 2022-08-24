#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NcCddiff : public Variable<std::uint8_t, 4> {
public:
    explicit NcCddiff(std::uint8_t value = 0);
    explicit NcCddiff(const nlohmann::json & j, const std::string & order = "");
};
