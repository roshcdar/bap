#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QDirlrbg : public Variable<std::uint8_t, 2> {
public:
    explicit QDirlrbg(std::uint8_t value = 0);
    explicit QDirlrbg(const nlohmann::json & j, const std::string & order = "");
};
