#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QDir : public Variable<std::uint8_t, 2> {
public:
    explicit QDir(std::uint8_t value = 0);
    explicit QDir(const nlohmann::json & j, const std::string & order = "");
};



