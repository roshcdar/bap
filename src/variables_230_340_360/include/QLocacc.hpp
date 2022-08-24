#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class QLocacc : public Variable<std::uint8_t, 6>  {
public:
    explicit QLocacc(std::uint8_t value = 0);
    explicit QLocacc(const nlohmann::json & j, const std::string & order = "");
};
