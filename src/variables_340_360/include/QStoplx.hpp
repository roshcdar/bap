#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QStoplx : public Variable<std::uint8_t, 1> {
public:
    explicit QStoplx(std::uint8_t value = 0);
    explicit QStoplx(const nlohmann::json & j, const std::string & order = "");
};
