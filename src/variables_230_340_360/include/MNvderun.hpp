#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MNvderun : public Variable<std::uint8_t, 1> {
public:
    explicit MNvderun(std::uint8_t value = 0);
    explicit MNvderun(const nlohmann::json & j, const std::string & order = "");
};
