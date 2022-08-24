#pragma once
#include "MVoltageIf.hpp"

class MVoltageNotFollow : public MVoltageIf {
public:
    explicit MVoltageNotFollow(const MVoltage & mVoltage);
    explicit MVoltageNotFollow(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<MVoltageIf> Clone() const override;
private:
    void Check() const;
};
