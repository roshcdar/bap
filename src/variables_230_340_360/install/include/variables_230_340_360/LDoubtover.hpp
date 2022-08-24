#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LDoubtover : public Variable<std::uint16_t, 15> {
public:
    explicit LDoubtover(std::uint16_t value = 0);
    explicit LDoubtover(const nlohmann::json & j, const std::string & order = "");
};
