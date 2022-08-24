#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QLinkorientation : public Variable<std::uint8_t, 1> {
public:
    explicit QLinkorientation(std::uint8_t value = 0);
    explicit QLinkorientation(const nlohmann::json & j, const std::string & order = "");
};
