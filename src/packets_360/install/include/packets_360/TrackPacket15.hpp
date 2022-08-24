#pragma once
#include <variables_360/VEma.hpp>
#include <variables_360/TEma.hpp>
#include <packets_230_340_360/TrackPacket15Base.hpp>

class TrackPacket15 : public TrackPacket15Base {
public:
    TrackPacket15(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket, const QScale & qScale, const VEma & vEma, const TEma & tEma,
                      const NIter & nIter, const std::vector<LSection> & lSections, const std::vector<copy_ptr<const QSectiontimerIf>> & qSectiontimerIfs,
                      const LEndsection & lEndsection, const copy_ptr<const QSectiontimerIf> & qSectiontimerIf, const copy_ptr<const QEndtimerIf> & qEndtimerIf,
                      const copy_ptr<const QDangerpointIf> & qDangerpointIf, const copy_ptr<const QOverlapIf> & qOverlapIf);
    explicit TrackPacket15(const nlohmann::json &j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const VEma & GetVEma() const;
    [[nodiscard]] const TEma & GetTEma() const;
protected:
    void PrintVersionSpecific(std::ostream & os) const override;
private:
    void Check() const;
    VEma vEma;
    TEma tEma;
};
