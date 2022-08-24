#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidRbc : public Variable<std::uint16_t, 14> {
public:
    explicit NidRbc(std::uint16_t value = 0);
    explicit NidRbc(const nlohmann::json & j, const std::string & order = "");
};
