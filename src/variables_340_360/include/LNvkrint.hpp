#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class LNvkrint : public Variable<std::uint8_t, 5> {
public:
    explicit LNvkrint(std::uint8_t value = 0);
    explicit LNvkrint(const nlohmann::json & j, const std::string & order = "");
};
