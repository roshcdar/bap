#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VDiff : public Variable<std::uint8_t, 7> {
public:
    explicit VDiff(std::uint8_t value = 0);
    explicit VDiff(const nlohmann::json & j, const std::string & order = "");
};
