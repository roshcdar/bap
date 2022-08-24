#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VNvonsight : public Variable<std::uint8_t, 7> {
public:
    explicit VNvonsight(std::uint8_t value = 0);
    explicit VNvonsight(const nlohmann::json & j, const std::string & order = "");
};
