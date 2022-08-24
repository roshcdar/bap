#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QTextreport : public Variable<std::uint8_t, 1> {
public:
    explicit QTextreport(std::uint8_t value = 0);
    explicit QTextreport(const nlohmann::json & j, const std::string & order = "");
};
