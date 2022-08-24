#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MNvkrint : public Variable<std::uint8_t, 5> {
public:
    explicit MNvkrint(std::uint8_t value = 0);
    explicit MNvkrint(const nlohmann::json & j, const std::string & order = "");
};
