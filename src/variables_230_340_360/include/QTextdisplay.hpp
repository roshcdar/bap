#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QTextdisplay : public Variable<std::uint8_t, 1> {
public:
    explicit QTextdisplay(std::uint8_t value = 0);
    explicit QTextdisplay(const nlohmann::json & j, const std::string & order = "");
};
