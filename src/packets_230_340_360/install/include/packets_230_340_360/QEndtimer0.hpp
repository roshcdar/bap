#pragma once
#include "QEndtimerIf.hpp"

class QEndtimer0 : public QEndtimerIf {
public:
    explicit QEndtimer0(const QEndtimer & qEndtimer);
    explicit QEndtimer0(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QEndtimerIf> Clone() const override;
private:
    void Check() const;
};
