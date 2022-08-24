#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LMessage : public Variable<std::uint16_t, 10> {
public:
    explicit LMessage(std::uint16_t value = 0);
    explicit LMessage(const nlohmann::json & j, const std::string & order = "");
};
