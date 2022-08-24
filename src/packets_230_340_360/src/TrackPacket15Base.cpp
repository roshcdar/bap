#include "../include/TrackPacket15Base.hpp"
#include <cstdint>
#include "../include/QSectiontimer1.hpp"
#include "../include/QSectiontimer0.hpp"
#include "../include/QEndtimer1.hpp"
#include "../include/QEndtimer0.hpp"
#include "../include/QDangerpoint1.hpp"
#include "../include/QDangerpoint0.hpp"
#include "../include/QOverlap1.hpp"
#include "../include/QOverlap0.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket15Base::TrackPacket15Base(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket, const QScale & qScale,
                                     const NIter & nIter, const std::vector<LSection> & lSections, const std::vector<copy_ptr<const QSectiontimerIf>> & qSectiontimerIfs,
                                     const LEndsection & lEndsection, const copy_ptr<const QSectiontimerIf> & qSectiontimerIf, const copy_ptr<const QEndtimerIf> & qEndtimerIf,
                                     const copy_ptr<const QDangerpointIf> & qDangerpointIf, const copy_ptr<const QOverlapIf> & qOverlapIf)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), nIter(nIter), lSections(lSections), qSectiontimerIfs(qSectiontimerIfs), lEndsection(lEndsection),
  qSectiontimerIf(qSectiontimerIf), qEndtimerIf(qEndtimerIf), qDangerpointIf(qDangerpointIf), qOverlapIf(qOverlapIf)
{
    Check();
}

TrackPacket15Base::TrackPacket15Base(const nlohmann::json &j) : PacketQDirQScale(j), nIter(j), lEndsection(j) {
    try {
        for (const auto & it : j.at("lSections"))
            lSections.emplace_back(LSection(it));
        std::uint8_t helper;
        for (const auto & it : j.at("qSectiontimerIfs")) {
            it.at("Q_SECTIONTIMER").get_to(helper);
            switch (helper) {
                case 0:
                    qSectiontimerIfs.emplace_back(std::make_unique<QSectiontimer0>(it));
                    break;
                case 1:
                    qSectiontimerIfs.emplace_back(std::make_unique<QSectiontimer1>(it));
                    break;
                default:
                    throw NotPacketException();
            }
        }
        j.at("qSectiontimerIf").at("Q_SECTIONTIMER").get_to(helper);
        switch (helper) {
            case 0:
                qSectiontimerIf = std::make_unique<QSectiontimer0>(j.at("qSectiontimerIf"));
                break;
            case 1:
                qSectiontimerIf = std::make_unique<QSectiontimer1>(j.at("qSectiontimerIf"));
                break;
            default:
                throw NotPacketException();
        }
        j.at("qEndtimerIf").at("Q_ENDTIMER").get_to(helper);
        switch (helper) {
            case 0:
                qEndtimerIf = std::make_unique<QEndtimer0>(j.at("qEndtimerIf"));
                break;
            case 1:
                qEndtimerIf = std::make_unique<QEndtimer1>(j.at("qEndtimerIf"));
                break;
            default:
                throw NotPacketException();
        }
        j.at("qDangerpointIf").at("Q_DANGERPOINT").get_to(helper);
        switch (helper) {
            case 0:
                qDangerpointIf = std::make_unique<QDangerpoint0>(j.at("qDangerpointIf"));
                break;
            case 1:
                qDangerpointIf = std::make_unique<QDangerpoint1>(j.at("qDangerpointIf"));
                break;
            default:
                throw NotPacketException();
        }
        j.at("qOverlapIf").at("Q_OVERLAP").get_to(helper);
        switch (helper) {
            case 0:
                qOverlapIf = std::make_unique<QOverlap0>(j.at("qOverlapIf"));
                break;
            case 1:
                qOverlapIf = std::make_unique<QOverlap1>(j.at("qOverlapIf"));
                break;
            default:
                throw NotPacketException();
        }
    }
    catch (nlohmann::json::exception &e) {
        throw NotPacketException();
    }
    Check();
}

nlohmann::json TrackPacket15Base::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    nIter.ToJson(j);
    for (const auto & lSection : lSections)
        j["lSections"].emplace_back(lSection.ToJson());
    for (const auto & timer : qSectiontimerIfs)
        j["qSectiontimerIfs"].emplace_back(timer -> ToJson());
    lEndsection.ToJson(j);
    j["qSectiontimerIf"] = qSectiontimerIf -> ToJson();
    j["qEndtimerIf"] = qEndtimerIf -> ToJson();
    j["qDangerpointIf"] = qDangerpointIf -> ToJson();
    j["qOverlapIf"] = qOverlapIf -> ToJson();
    return j;
}

void  TrackPacket15Base::Print ( std::ostream & os ) const {
    PacketQDirQScale::Print(os);
    PrintVersionSpecific(os);
    os << nIter;
    std::uint8_t iter = nIter.GetValue();
    for (std::uint8_t i = 0; i < iter; ++i) {
        os << "------------\n";
        os << lSections[i];
        os << *qSectiontimerIfs[i];
    }
    if (iter)
        os << "------------\n";
    os << lEndsection << *qSectiontimerIf << *qEndtimerIf << *qDangerpointIf << *qOverlapIf;
}

const NIter & TrackPacket15Base::GetNIter() const {
    return nIter;
}
const std::vector<LSection> & TrackPacket15Base::GetLSections() const {
    return lSections;
}

const std::vector<copy_ptr<const QSectiontimerIf>> & TrackPacket15Base::GetQSectiontimerIfs() const {
    return qSectiontimerIfs;
}

const LEndsection & TrackPacket15Base::GetLEndsection() const {
    return lEndsection;
}

const copy_ptr<const QSectiontimerIf> & TrackPacket15Base::GetQSectiontimerIf() const {
    return qSectiontimerIf;
}

const copy_ptr<const QEndtimerIf> & TrackPacket15Base::GetQEndtimerIf() const {
    return qEndtimerIf;
}

const copy_ptr<const QDangerpointIf> & TrackPacket15Base::GetQDangerpointIf() const {
    return qDangerpointIf;
}

const copy_ptr<const QOverlapIf> & TrackPacket15Base::GetQOverlapIf() const {
    return qOverlapIf;
}

void TrackPacket15Base::Check() const {
    if (!(nidPacket.GetValue() == 15 && lSections.size() == nIter.GetValue() && qSectiontimerIfs.size() == nIter.GetValue()
          && qSectiontimerIf != nullptr && qEndtimerIf != nullptr && qDangerpointIf != nullptr && qOverlapIf != nullptr))
        throw NotPacketException();
    for (const auto & timer : qSectiontimerIfs) {
        if (timer == nullptr)
            throw NotPacketException();
    }
}

void  TrackPacket15Base::PrintPacketName ( std::ostream & os ) const {
    os << "Level 2/3 Movement Authority\n";
}