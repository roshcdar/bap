#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class DPbdsr : public Variable<std::uint16_t, 15> {
public:
    explicit DPbdsr(std::uint16_t value = 0);
    explicit DPbdsr(const nlohmann::json & j, const std::string & order = "");
};
