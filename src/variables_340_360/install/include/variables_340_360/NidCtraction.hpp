#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NidCtraction : public Variable<std::uint16_t, 10> {
public:
    explicit NidCtraction(std::uint16_t value = 0);
    explicit NidCtraction(const nlohmann::json & j, const std::string & order = "");
};
