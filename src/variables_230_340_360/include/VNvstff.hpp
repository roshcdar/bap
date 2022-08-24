#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VNvstff : public Variable<std::uint8_t, 7> {
public:
    explicit VNvstff(std::uint8_t value = 0);
    explicit VNvstff(const nlohmann::json & j, const std::string & order = "");
};
