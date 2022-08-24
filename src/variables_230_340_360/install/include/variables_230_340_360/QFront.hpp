#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QFront : public Variable<std::uint8_t, 1> {
public:
    explicit QFront(std::uint8_t value = 0);
    explicit QFront(const nlohmann::json & j, const std::string & order = "");
};
