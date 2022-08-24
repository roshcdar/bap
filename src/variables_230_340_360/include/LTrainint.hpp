#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LTrainint : public Variable<std::uint16_t, 15> {
public:
    explicit LTrainint(std::uint16_t value = 0);
    explicit LTrainint(const nlohmann::json & j, const std::string & order = "");
};
