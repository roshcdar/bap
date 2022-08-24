#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MNvcontact : public Variable<std::uint8_t, 2> {
public:
    explicit MNvcontact(std::uint8_t value = 0);
    explicit MNvcontact(const nlohmann::json & j, const std::string & order = "");
};
