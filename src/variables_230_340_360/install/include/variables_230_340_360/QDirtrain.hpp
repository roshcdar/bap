#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QDirtrain : public Variable<std::uint8_t, 2> {
public:
    explicit QDirtrain(std::uint8_t value = 0);
    explicit QDirtrain(const nlohmann::json & j, const std::string & order = "");
};
