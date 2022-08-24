#pragma once
#include <vector>
#include "QDangerpointIf.hpp"
#include "QOverlapIf.hpp"
#include "QEndtimerIf.hpp"
#include "QSectiontimerIf.hpp"
#include <variables_230_340_360/NIter.hpp>
#include <variables_230_340_360/LSection.hpp>
#include <variables_230_340_360/LEndsection.hpp>
#include "copy_ptr.hpp"
#include "PacketQDirQScale.hpp"

class TrackPacket15Base : public PacketQDirQScale {
public:
    TrackPacket15Base(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket, const QScale & qScale,
                      const NIter & nIter, const std::vector<LSection> & lSections, const std::vector<copy_ptr<const QSectiontimerIf>> & qSectiontimerIfs,
                      const LEndsection & lEndsection, const copy_ptr<const QSectiontimerIf> & qSectiontimerIf, const copy_ptr<const QEndtimerIf> & qEndtimerIf,
                      const copy_ptr<const QDangerpointIf> & qDangerpointIf, const copy_ptr<const QOverlapIf> & qOverlapIf);
    explicit TrackPacket15Base(const nlohmann::json &j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const NIter & GetNIter() const;
    [[nodiscard]] const std::vector<LSection> & GetLSections() const;
    [[nodiscard]] const std::vector<copy_ptr<const QSectiontimerIf>> & GetQSectiontimerIfs() const;
    [[nodiscard]] const LEndsection & GetLEndsection() const;
    [[nodiscard]] const copy_ptr<const QSectiontimerIf> & GetQSectiontimerIf() const;
    [[nodiscard]] const copy_ptr<const QEndtimerIf> & GetQEndtimerIf() const;
    [[nodiscard]] const copy_ptr<const QDangerpointIf> & GetQDangerpointIf() const;
    [[nodiscard]] const copy_ptr<const QOverlapIf> & GetQOverlapIf() const;
protected:
    void  Print ( std::ostream & os ) const override;
    void  PrintPacketName ( std::ostream & os ) const override;
    virtual void PrintVersionSpecific(std::ostream & os) const = 0;
    NIter nIter;
    std::vector<LSection> lSections;
    std::vector<copy_ptr<const QSectiontimerIf>> qSectiontimerIfs;
    LEndsection lEndsection;
    copy_ptr<const QSectiontimerIf> qSectiontimerIf;
    copy_ptr<const QEndtimerIf> qEndtimerIf;
    copy_ptr<const QDangerpointIf> qDangerpointIf;
    copy_ptr<const QOverlapIf> qOverlapIf;
private:
    void Check() const;
};
