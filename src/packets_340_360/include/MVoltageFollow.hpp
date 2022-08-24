#pragma once
#include <variables_340_360/NidCtraction.hpp>
#include "MVoltageIf.hpp"

class MVoltageFollow : public MVoltageIf {
public:
    explicit MVoltageFollow(const MVoltage & mVoltage, const NidCtraction & nidCtraction);
    explicit MVoltageFollow(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<MVoltageIf> Clone() const override;
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] std::uint8_t CountLength() const override;
    [[nodiscard]] const NidCtraction & GetNidCtraction() const;
protected:
    void  Print ( std::ostream & os ) const override;
private:
    void Check() const;
    NidCtraction nidCtraction;
};
