#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DTrackcond : public Variable<std::uint16_t, 15> {
public:
    explicit DTrackcond(std::uint16_t value = 0);
    explicit DTrackcond(const nlohmann::json & j, const std::string & order = "");
};
