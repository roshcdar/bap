#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QSectiontimer : public Variable<std::uint8_t, 1> {
public:
    explicit QSectiontimer(std::uint8_t value = 0);
    explicit QSectiontimer(const nlohmann::json & j, const std::string & order = "");
};
