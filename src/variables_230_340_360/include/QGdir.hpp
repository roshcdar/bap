#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QGdir : public Variable<std::uint8_t, 1> {
public:
    explicit QGdir(std::uint8_t value = 0);
    explicit QGdir(const nlohmann::json & j, const std::string & order = "");
};
