#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QNvlocacc : public Variable<std::uint8_t, 6> {
public:
    explicit QNvlocacc(std::uint8_t value = 0);
    explicit QNvlocacc(const nlohmann::json & j, const std::string & order = "");
};
