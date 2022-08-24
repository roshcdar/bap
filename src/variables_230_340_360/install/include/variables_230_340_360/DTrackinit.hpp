#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DTrackinit : public Variable<std::uint16_t, 15> {
public:
    explicit DTrackinit(std::uint16_t value = 0);
    explicit DTrackinit(const nlohmann::json & j, const std::string & order = "");
};
