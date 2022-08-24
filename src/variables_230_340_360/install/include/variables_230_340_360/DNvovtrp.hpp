#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DNvovtrp : public Variable<std::uint16_t, 15> {
public:
    explicit DNvovtrp(std::uint16_t value = 0);
    explicit DNvovtrp(const nlohmann::json & j, const std::string & order = "");
};
