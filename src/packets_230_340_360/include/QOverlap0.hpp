#pragma once
#include "QOverlapIf.hpp"

class QOverlap0 : public QOverlapIf {
public:
    explicit QOverlap0(const QOverlap & qOverlap);
    explicit QOverlap0(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QOverlapIf> Clone() const override;
private:
    void Check() const;
};
