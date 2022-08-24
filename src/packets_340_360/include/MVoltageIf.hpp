#pragma once
#include <cstdint>
#include <memory>
#include <iostream>
#include <nlohmann/json.hpp>
#include <variables_340_360/MVoltage.hpp>

class MVoltageIf {
public:
    explicit MVoltageIf(const MVoltage & mVoltage);
    explicit MVoltageIf(const nlohmann::json & j);
    virtual ~MVoltageIf() = default;
    [[nodiscard]] virtual std::unique_ptr<MVoltageIf> Clone() const = 0;
    [[nodiscard]] virtual nlohmann::json ToJson() const;
    [[nodiscard]] virtual std::uint8_t CountLength() const;
    friend std::ostream & operator << ( std::ostream & os, const MVoltageIf & mVoltageIf);
    [[nodiscard]] const MVoltage & GetMVoltage() const;
protected:
    virtual void  Print ( std::ostream & os ) const;
    MVoltage mVoltage;
};
