#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LDoubtunder : public Variable<std::uint16_t, 15> {
public:
    explicit LDoubtunder(std::uint16_t value = 0);
    explicit LDoubtunder(const nlohmann::json & j, const std::string & order = "");
};
