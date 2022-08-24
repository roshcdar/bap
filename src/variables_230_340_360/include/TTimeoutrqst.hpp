#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class TTimeoutrqst : public Variable<std::uint16_t, 10> {
public:
    explicit TTimeoutrqst(std::uint16_t value = 0);
    explicit TTimeoutrqst(const nlohmann::json & j, const std::string & order = "");
};
