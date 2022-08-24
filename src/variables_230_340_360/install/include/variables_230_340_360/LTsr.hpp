#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LTsr : public Variable<std::uint16_t, 15> {
public:
    explicit LTsr(std::uint16_t value = 0);
    explicit LTsr(const nlohmann::json & j, const std::string & order = "");
};
