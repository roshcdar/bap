#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidLrbg : public Variable<std::uint32_t, 24> {
public:
    explicit NidLrbg(std::uint32_t value = 0);
    explicit NidLrbg(const nlohmann::json & j, const std::string & order = "");
};
