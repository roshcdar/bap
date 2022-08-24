#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VTrain : public Variable<std::uint8_t, 7> {
public:
    explicit VTrain(std::uint8_t value = 0);
    explicit VTrain(const nlohmann::json & j, const std::string & order = "");
};
