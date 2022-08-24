#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QNvsbtsmperm : public Variable<std::uint8_t, 1> {
public:
    explicit QNvsbtsmperm(std::uint8_t value = 0);
    explicit QNvsbtsmperm(const nlohmann::json & j, const std::string & order = "");
};
