#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QLgtloc : public Variable<std::uint8_t, 1> {
public:
    explicit QLgtloc(std::uint8_t value = 0);
    explicit QLgtloc(const nlohmann::json & j, const std::string & order = "");
};
