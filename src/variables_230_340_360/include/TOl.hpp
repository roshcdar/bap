#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TOl : public Variable<std::uint16_t, 10> {
public:
    explicit TOl(std::uint16_t value = 0);
    explicit TOl(const nlohmann::json & j, const std::string & order = "");
};
