#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DNvpotrp : public Variable<std::uint16_t, 15> {
public:
    explicit DNvpotrp(std::uint16_t value = 0);
    explicit DNvpotrp(const nlohmann::json & j, const std::string & order = "");
};
