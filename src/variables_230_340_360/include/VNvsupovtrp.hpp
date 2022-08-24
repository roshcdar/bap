#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VNvsupovtrp : public Variable<std::uint8_t, 7> {
public:
    explicit VNvsupovtrp(std::uint8_t value = 0);
    explicit VNvsupovtrp(const nlohmann::json & j, const std::string & order = "");
};
