#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QNvguiperm : public Variable<std::uint8_t, 1> {
public:
    explicit QNvguiperm(std::uint8_t value = 0);
    explicit QNvguiperm(const nlohmann::json & j, const std::string & order = "");
};
