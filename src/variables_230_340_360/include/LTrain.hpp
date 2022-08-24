#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LTrain : public Variable<std::uint16_t, 12> {
public:
    explicit LTrain(std::uint16_t value = 0);
    explicit LTrain(const nlohmann::json & j, const std::string & order = "");
};
