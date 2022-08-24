#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NidNtc : public Variable<std::uint8_t, 8> {
public:
    explicit NidNtc(std::uint8_t value = 0);
    explicit NidNtc(const nlohmann::json & j, const std::string & order = "");
};
