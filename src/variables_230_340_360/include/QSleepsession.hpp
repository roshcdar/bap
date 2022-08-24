#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QSleepsession : public Variable<std::uint8_t, 1> {
public:
    explicit QSleepsession(std::uint8_t value = 0);
    explicit QSleepsession(const nlohmann::json & j, const std::string & order = "");
};
