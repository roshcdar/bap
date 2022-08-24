#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NidTextmessage : public Variable<std::uint8_t, 8> {
public:
    explicit NidTextmessage(std::uint8_t value = 0);
    explicit NidTextmessage(const nlohmann::json & j, const std::string & order = "");
};
