#pragma once
#include <variables_230_340_360/DDp.hpp>
#include <variables_230_340_360/VReleasedp.hpp>
#include "QDangerpointIf.hpp"

class QDangerpoint1 : public QDangerpointIf {
public:
    QDangerpoint1(const QDangerpoint & qDangerpoint, const DDp & dDp, const VReleasedp & vReleasedp);
    explicit QDangerpoint1(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QDangerpointIf> Clone() const override;
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] std::uint8_t CountLength() const override;
    [[nodiscard]] const DDp & GetDDp() const;
    [[nodiscard]] const VReleasedp & GetVReleasedp() const;
protected:
    void  Print ( std::ostream & os ) const override;
private:
    void Check() const;
    DDp dDp;
    VReleasedp vReleasedp;
};
