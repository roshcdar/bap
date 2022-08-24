#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidPacket : public Variable<std::uint8_t, 8> {
public:
    explicit NidPacket(std::uint8_t value = 0);
    explicit NidPacket(const nlohmann::json & j, const std::string & order = "");
};
