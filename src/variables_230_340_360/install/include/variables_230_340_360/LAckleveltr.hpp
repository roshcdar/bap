#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LAckleveltr : public Variable<std::uint16_t, 15> {
public:
    explicit LAckleveltr(std::uint16_t value = 0);
    explicit LAckleveltr(const nlohmann::json & j, const std::string & order = "");
};

