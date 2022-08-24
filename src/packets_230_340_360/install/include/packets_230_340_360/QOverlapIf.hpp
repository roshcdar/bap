#pragma once
#include <cstdint>
#include <memory>
#include <iostream>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/QOverlap.hpp>

class QOverlapIf {
public:
    explicit QOverlapIf(const QOverlap & qOverlap);
    explicit QOverlapIf(const nlohmann::json & j);
    virtual ~QOverlapIf() = default;
    [[nodiscard]] virtual std::unique_ptr<QOverlapIf> Clone() const = 0;
    [[nodiscard]] virtual nlohmann::json ToJson() const;
    [[nodiscard]] virtual std::uint8_t CountLength() const;
    friend std::ostream & operator << ( std::ostream & os, const QOverlapIf & qOverlapIf);
    [[nodiscard]] const QOverlap & GetQOverlap() const;
protected:
    virtual void  Print ( std::ostream & os ) const;
    QOverlap qOverlap;
};
