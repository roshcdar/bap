#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidEm : public Variable<std::uint8_t, 4> {
public:
    explicit NidEm(std::uint8_t value = 0);
    explicit NidEm(const nlohmann::json & j, const std::string & order = "");
};
