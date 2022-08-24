#pragma once
#include <cstdint>
#include <memory>
#include <iostream>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/QEndtimer.hpp>

class QEndtimerIf {
public:
    explicit QEndtimerIf(const QEndtimer & qEndtimer);
    explicit QEndtimerIf(const nlohmann::json & j);
    virtual ~QEndtimerIf() = default;
    [[nodiscard]] virtual std::unique_ptr<QEndtimerIf> Clone() const = 0;
    [[nodiscard]] virtual nlohmann::json ToJson() const;
    [[nodiscard]] virtual std::uint8_t CountLength() const;
    friend std::ostream & operator << ( std::ostream & os, const QEndtimerIf & qEndtimerIf);
    [[nodiscard]] const QEndtimer & GetQEndtimer() const;
protected:
    virtual void  Print ( std::ostream & os ) const;
    QEndtimer qEndtimer;
};
