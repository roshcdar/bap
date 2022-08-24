#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidBg : public Variable<std::uint16_t, 14> {
public:
    explicit NidBg(std::uint16_t value = 0);
    explicit NidBg(const nlohmann::json & j, const std::string & order = "");
};
