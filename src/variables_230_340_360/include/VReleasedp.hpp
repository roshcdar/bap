#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VReleasedp : public Variable<std::uint8_t, 7> {
public:
    explicit VReleasedp(std::uint8_t value = 0);
    explicit VReleasedp(const nlohmann::json & j, const std::string & order = "");
};
