#pragma once
#include <cstdint>
#include <memory>
#include <iostream>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/QSectiontimer.hpp>

class QSectiontimerIf {
public:
    explicit QSectiontimerIf(const QSectiontimer & qSectiontimer);
    explicit QSectiontimerIf(const nlohmann::json & j);
    virtual ~QSectiontimerIf() = default;
    [[nodiscard]] virtual std::unique_ptr<QSectiontimerIf> Clone() const = 0;
    [[nodiscard]] virtual nlohmann::json ToJson() const;
    [[nodiscard]] virtual std::uint8_t CountLength() const;
    friend std::ostream & operator << ( std::ostream & os, const QSectiontimerIf & qSectiontimerIf);
    [[nodiscard]] const QSectiontimer & GetQSectiontimer() const;
protected:
    virtual void  Print ( std::ostream & os ) const;
    QSectiontimer qSectiontimer;
};
