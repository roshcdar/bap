#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QTextclass : public Variable<std::uint8_t, 2> {
public:
    explicit QTextclass(std::uint8_t value = 0);
    explicit QTextclass(const nlohmann::json & j, const std::string & order = "");
};
