#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QRbc : public Variable<std::uint8_t, 1> {
public:
    explicit QRbc(std::uint8_t value = 0);
    explicit QRbc(const nlohmann::json & j, const std::string & order = "");
};

