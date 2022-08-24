#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QNvkvintset : public Variable<std::uint8_t, 2> {
public:
    explicit QNvkvintset(std::uint8_t value = 0);
    explicit QNvkvintset(const nlohmann::json & j, const std::string & order = "");
};
