#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidC : public Variable<std::uint16_t, 10> {
public:
    explicit NidC(std::uint16_t value = 0);
    explicit NidC(const nlohmann::json & j, const std::string & order = "");
};
