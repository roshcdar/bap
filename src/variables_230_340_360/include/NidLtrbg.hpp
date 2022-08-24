#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidLtrbg : public Variable<std::uint32_t, 24> {
public:
    explicit NidLtrbg(std::uint32_t value = 0);
    explicit NidLtrbg(const nlohmann::json & j, const std::string & order = "");
};
