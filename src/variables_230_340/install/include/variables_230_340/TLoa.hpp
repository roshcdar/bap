#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class TLoa : public Variable<std::uint16_t, 10> {
public:
    explicit TLoa(std::uint16_t value = 0);
    explicit TLoa(const nlohmann::json & j, const std::string & order = "");
};
