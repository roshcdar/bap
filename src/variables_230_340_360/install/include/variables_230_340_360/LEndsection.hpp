#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class LEndsection : public Variable<std::uint16_t, 15> {
public:
    explicit LEndsection(std::uint16_t value = 0);
    explicit LEndsection(const nlohmann::json & j, const std::string & order = "");
};
