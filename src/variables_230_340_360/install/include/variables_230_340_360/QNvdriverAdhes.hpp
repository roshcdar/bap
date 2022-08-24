#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QNvdriverAdhes : public Variable<std::uint8_t, 1> {
public:
    explicit QNvdriverAdhes(std::uint8_t value = 0);
    explicit QNvdriverAdhes(const nlohmann::json & j, const std::string & order = "");
};
