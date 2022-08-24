#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DLink : public Variable<std::uint16_t, 15> {
public:
    explicit DLink(std::uint16_t value = 0);
    explicit DLink(const nlohmann::json & j, const std::string & order = "");
};
