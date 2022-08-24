#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MAck : public Variable<std::uint8_t, 1> {
public:
    explicit MAck(std::uint8_t value = 0);
    explicit MAck(const nlohmann::json & j, const std::string & order = "");
};
