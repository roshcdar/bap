#pragma once
#include "QSectiontimerIf.hpp"

class QSectiontimer0 : public QSectiontimerIf {
public:
    explicit QSectiontimer0(const QSectiontimer & qSectiontimer);
    explicit QSectiontimer0(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QSectiontimerIf> Clone() const override;
private:
    void Check() const;
};
