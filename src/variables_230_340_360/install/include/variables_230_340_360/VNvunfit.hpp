#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VNvunfit : public Variable<std::uint8_t, 7> {
public:
    explicit VNvunfit(std::uint8_t value = 0);
    explicit VNvunfit(const nlohmann::json & j, const std::string & order = "");
};
