#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidEngine : public Variable<std::uint32_t, 24> {
public:
    explicit NidEngine(std::uint32_t value = 0);
    explicit NidEngine(const nlohmann::json & j, const std::string & order = "");
};
