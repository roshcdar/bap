#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DEmergencystop : public Variable<std::uint16_t, 15> {
public:
    explicit DEmergencystop(std::uint16_t value = 0);
    explicit DEmergencystop(const nlohmann::json & j, const std::string & order = "");
};
