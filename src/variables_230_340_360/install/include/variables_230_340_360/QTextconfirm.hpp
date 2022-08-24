#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QTextconfirm : public Variable<std::uint8_t, 2> {
public:
    explicit QTextconfirm(std::uint8_t value = 0);
    explicit QTextconfirm(const nlohmann::json & j, const std::string & order = "");
};
