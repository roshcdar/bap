#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QOverlap : public Variable<std::uint8_t, 1> {
public:
    explicit QOverlap(std::uint8_t value = 0);
    explicit QOverlap(const nlohmann::json & j, const std::string & order = "");
};
