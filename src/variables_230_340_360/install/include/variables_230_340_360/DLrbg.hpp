#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DLrbg : public Variable<std::uint16_t, 15> {
public:
    explicit DLrbg(std::uint16_t value = 0);
    explicit DLrbg(const nlohmann::json & j, const std::string & order = "");
};
