#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidTsr : public Variable<std::uint8_t, 8> {
public:
    explicit NidTsr(std::uint8_t value = 0);
    explicit NidTsr(const nlohmann::json & j, const std::string & order = "");
};
