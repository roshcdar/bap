#pragma once
#include <variables_230_340_360/TSectiontimer.hpp>
#include <variables_230_340_360/DSectiontimerstoploc.hpp>
#include "QSectiontimerIf.hpp"

class QSectiontimer1 : public QSectiontimerIf {
public:
    QSectiontimer1(const QSectiontimer & qSectiontimer, const TSectiontimer & tSectiontimer,
                   const DSectiontimerstoploc & dSectiontimerstoploc);
    explicit QSectiontimer1(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QSectiontimerIf> Clone() const override;
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] std::uint8_t CountLength() const override;
    [[nodiscard]] const TSectiontimer & GetTSectiontimer() const;
    [[nodiscard]] const DSectiontimerstoploc & GetDSectiontimerstoploc() const;
protected:
    void  Print ( std::ostream & os ) const override;
private:
    void Check() const;
    TSectiontimer tSectiontimer;
    DSectiontimerstoploc dSectiontimerstoploc;
};
