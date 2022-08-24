#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class DAxleload : public Variable<std::uint16_t, 15>  {
public:
    explicit DAxleload(std::uint16_t value = 0);
    explicit DAxleload(const nlohmann::json & j, const std::string & order = "");
};
