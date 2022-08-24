#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VAxleload : public Variable<std::uint8_t, 7> {
public:
    explicit VAxleload(std::uint8_t value = 0);
    explicit VAxleload(const nlohmann::json & j, const std::string & order = "");
};
