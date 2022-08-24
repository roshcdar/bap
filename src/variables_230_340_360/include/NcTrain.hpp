#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NcTrain : public Variable<std::uint16_t, 15> {
public:
    explicit NcTrain(std::uint16_t value = 0);
    explicit NcTrain(const nlohmann::json & j, const std::string & order = "");
};
