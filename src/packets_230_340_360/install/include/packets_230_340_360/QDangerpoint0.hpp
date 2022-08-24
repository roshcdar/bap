#pragma once
#include "QDangerpointIf.hpp"

class QDangerpoint0 : public QDangerpointIf {
public:
    explicit QDangerpoint0(const QDangerpoint & qDangerpoint);
    explicit QDangerpoint0(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QDangerpointIf> Clone() const override;
private:
    void Check() const;
};
