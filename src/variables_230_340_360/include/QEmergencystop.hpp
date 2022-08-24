#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QEmergencystop : public Variable<std::uint8_t, 2> {
public:
    explicit QEmergencystop(std::uint8_t value = 0);
    explicit QEmergencystop(const nlohmann::json & j, const std::string & order = "");
};
