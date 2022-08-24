#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VNvrel : public Variable<std::uint8_t, 7> {
public:
    explicit VNvrel(std::uint8_t value = 0);
    explicit VNvrel(const nlohmann::json & j, const std::string & order = "");
};
