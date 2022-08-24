#pragma once
#include <variables_230_340_360/TEndtimer.hpp>
#include <variables_230_340_360/DEndtimerstartloc.hpp>
#include "QEndtimerIf.hpp"

class QEndtimer1 : public QEndtimerIf {
public:
    QEndtimer1(const QEndtimer & qEndtimer, const TEndtimer & tEndtimer,
               const DEndtimerstartloc & dEndtimerstartloc);
    explicit QEndtimer1(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QEndtimerIf> Clone() const override;
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] std::uint8_t CountLength() const override;
    [[nodiscard]] const TEndtimer & GetTEndtimer() const;
    [[nodiscard]] const DEndtimerstartloc & GetDEndtimerstartloc() const;
protected:
    void  Print ( std::ostream & os ) const override;
private:
    void Check() const;
    TEndtimer tEndtimer;
    DEndtimerstartloc dEndtimerstartloc;
};
