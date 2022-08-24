#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MNvkvint : public Variable<std::uint8_t, 7> {
public:
    explicit MNvkvint(std::uint8_t value = 0);
    explicit MNvkvint(const nlohmann::json & j, const std::string & order = "");
};
