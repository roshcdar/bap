#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidMessage : public Variable<std::uint8_t, 8> {
public:
    explicit NidMessage(std::uint8_t value = 0);
    explicit NidMessage(const nlohmann::json & j, const std::string & order = "");
};
