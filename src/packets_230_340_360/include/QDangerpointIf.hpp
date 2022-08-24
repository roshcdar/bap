#pragma once
#include <cstdint>
#include <memory>
#include <iostream>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/QDangerpoint.hpp>

class QDangerpointIf {
public:
    explicit QDangerpointIf(const QDangerpoint & qDangerpoint);
    explicit QDangerpointIf(const nlohmann::json & j);
    virtual ~QDangerpointIf() = default;
    [[nodiscard]] virtual std::unique_ptr<QDangerpointIf> Clone() const = 0;
    [[nodiscard]] virtual nlohmann::json ToJson() const;
    [[nodiscard]] virtual std::uint8_t CountLength() const;
    friend std::ostream & operator << ( std::ostream & os, const QDangerpointIf & qDangerpointIf);
    [[nodiscard]] const QDangerpoint & GetQDangerpoint() const;
protected:
    virtual void  Print ( std::ostream & os ) const;
    QDangerpoint qDangerpoint;
};
