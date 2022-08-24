#pragma once
#include <variables_230_340_360/DStartol.hpp>
#include <variables_230_340_360/TOl.hpp>
#include <variables_230_340_360/DOl.hpp>
#include <variables_230_340_360/VReleaseol.hpp>
#include "QOverlapIf.hpp"

class QOverlap1 : public QOverlapIf {
public:
    QOverlap1(const QOverlap & qOverlap, const DStartol & dStartol, const TOl & tOl,
              const DOl & dOl, const VReleaseol & vReleaseol);
    explicit QOverlap1(const nlohmann::json & j);
    [[nodiscard]] std::unique_ptr<QOverlapIf> Clone() const override;
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] std::uint8_t CountLength() const override;
    [[nodiscard]] const DStartol & GetDStartol() const;
    [[nodiscard]] const TOl & GetTOl() const;
    [[nodiscard]] const DOl & GetDOl() const;
    [[nodiscard]] const VReleaseol & GetVReleaseol() const;
protected:
    void  Print ( std::ostream & os ) const override;
private:
    void Check() const;
    DStartol dStartol;
    TOl tOl;
    DOl dOl;
    VReleaseol vReleaseol;
};
