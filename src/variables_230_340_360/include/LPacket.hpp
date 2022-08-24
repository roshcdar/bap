#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LPacket : public Variable<std::uint16_t, 13> {
public:
    explicit LPacket(std::uint16_t value = 0);
    explicit LPacket(const nlohmann::json & j, const std::string & order = "");
};
