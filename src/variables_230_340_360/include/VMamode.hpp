#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VMamode : public Variable<std::uint8_t, 7> {
public:
    explicit VMamode(std::uint8_t value = 0);
    explicit VMamode(const nlohmann::json & j, const std::string & order = "");
};
