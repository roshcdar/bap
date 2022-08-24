#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QNvemrrls : public Variable<std::uint8_t, 1> {
public:
    explicit QNvemrrls(std::uint8_t value = 0);
    explicit QNvemrrls(const nlohmann::json & j, const std::string & order = "");
};
