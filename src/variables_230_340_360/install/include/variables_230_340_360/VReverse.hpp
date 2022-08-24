#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VReverse : public Variable<std::uint8_t, 7> {
public:
    explicit VReverse(std::uint8_t value = 0);
    explicit VReverse(const nlohmann::json & j, const std::string & order = "");
};
