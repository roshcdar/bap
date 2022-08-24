#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QDlrbg : public Variable<std::uint8_t, 2> {
public:
    explicit QDlrbg(std::uint8_t value = 0);
    explicit QDlrbg(const nlohmann::json & j, const std::string & order = "");
};
