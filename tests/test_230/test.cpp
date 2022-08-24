#include <variables_230/NidOperational.hpp>
#include <variables_230/NotVariableException.hpp>
#include <packets_230/AllPackets.hpp>
#include <nlohmann/json.hpp>
#include <cassert>
#include <vector>

/**
 * NID_OPERATIONAL can't have in hexadecimal notation values A-E
 */
bool createNidOperationalWithAE() {
    try {
        NidOperational nidOperational(0x122d2aff);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

/**
 * NID_OPERATIONAL can't have different values than F
 * after first F in it's hexadecimal notation
 */
bool createNidOperationalNotFAfterFirstF() {
    try {
        NidOperational nid(0x1222f1ff);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

bool createNidOperational() {
    try {
        NidOperational nidOperational(0x99999999);
        if (nidOperational.GetName() == "NID_OPERATIONAL" && nidOperational.GetValue() == 0x99999999)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool createNidOperationalJSON() {
    nlohmann::json j = {
            {"NID_OPERATIONAL", 15}
    };
    try {
        NidOperational nidOperational(j);
        if (nidOperational.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool setNidOperationalJSON() {
    nlohmann::json j;
    j["NID_OPERATIONAL"] = 1;
    try {
        NidOperational nidOperational(0);
        nidOperational.SetValue(j, "");
        if (nidOperational.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool setNidOperational() {
    try {
        NidOperational nidOperational(0x1111ffff);
        nidOperational.SetValue(0x0101ffff);
        if (nidOperational.GetValue() == 0x0101ffff)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool toJsonNidOperational() {
    nlohmann::json j = {
            {"NID_OPERATIONAL", 5}
    };
    nlohmann::json result;
    try {
        NidOperational nidOperational(5);
        nidOperational.ToJson(result);
        if (result == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool createTrackPacket15() {
    try {
        std::vector<LSection> lSections;
        lSections.emplace_back(LSection(12));
        lSections.emplace_back(LSection(13));
        std::vector<copy_ptr<const QSectiontimerIf>> qSectiontimerIfs;
        qSectiontimerIfs.emplace_back(std::make_unique<QSectiontimer0>(QSectiontimer(0)));
        qSectiontimerIfs.emplace_back(std::make_unique<QSectiontimer1>(QSectiontimer(1),
                                                                       TSectiontimer(1),
                                                                       DSectiontimerstoploc(23)));
        copy_ptr<const QSectiontimerIf> qSectiontimerIf(std::make_unique<QSectiontimer0>(QSectiontimer(0)));
        copy_ptr<const QEndtimerIf> qEndtimerIf(std::make_unique<QEndtimer0>(QEndtimer(0)));
        copy_ptr<const QDangerpointIf> qDangerpointIf(std::make_unique<QDangerpoint0>(QDangerpoint(0)));
        copy_ptr<const QOverlapIf> qOverlapIf(std::make_unique<QOverlap0>(QOverlap(0)));
        TrackPacket15 trackPacket15(NidPacket(15), QDir(1), LPacket(123), QScale(0), VLoa(10),
                                    TLoa(14), NIter(2), lSections, qSectiontimerIfs, LEndsection(9),
                                    qSectiontimerIf, qEndtimerIf, qDangerpointIf, qOverlapIf);
        if (trackPacket15.GetNidPacket() == NidPacket(15) && trackPacket15.GetLPacket() == LPacket(123) &&
            trackPacket15.GetQDir() == QDir(1) && trackPacket15.GetQScale() == QScale(0) &&
            trackPacket15.GetVLoa() == VLoa(10) && trackPacket15.GetTLoa() == TLoa(14) &&
            trackPacket15.GetNIter() == NIter(2) && trackPacket15.GetLSections() == lSections &&
            trackPacket15.GetLEndsection() == LEndsection(9) && trackPacket15.GetQDangerpointIf()->GetQDangerpoint() == qDangerpointIf->GetQDangerpoint() &&
            trackPacket15.GetQSectiontimerIf()->GetQSectiontimer() == qSectiontimerIf->GetQSectiontimer() &&
            trackPacket15.GetQEndtimerIf()->GetQEndtimer() == qEndtimerIf->GetQEndtimer() &&
            trackPacket15.GetQOverlapIf()->GetQOverlap() == qOverlapIf->GetQOverlap() &&
            trackPacket15.GetQSectiontimerIfs()[0]->GetQSectiontimer() == qSectiontimerIfs[0]->GetQSectiontimer() &&
            trackPacket15.GetQSectiontimerIfs()[1]->GetQSectiontimer() == qSectiontimerIfs[1]->GetQSectiontimer())
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

/**
 * copy_ptr on base class with decision variable is never nullptr in packets
 */
bool createTrackPacket15Nullptr() {
    try {
        std::vector<LSection> lSections;
        lSections.emplace_back(LSection(12));
        lSections.emplace_back(LSection(13));
        std::vector<copy_ptr<const QSectiontimerIf>> qSectiontimerIfs;
        qSectiontimerIfs.emplace_back(std::make_unique<QSectiontimer0>(QSectiontimer(0)));
        qSectiontimerIfs.emplace_back(nullptr);
        copy_ptr<const QSectiontimerIf> qSectiontimerIf(std::make_unique<QSectiontimer0>(QSectiontimer(0)));
        copy_ptr<const QEndtimerIf> qEndtimerIf(std::make_unique<QEndtimer0>(QEndtimer(0)));
        copy_ptr<const QDangerpointIf> qDangerpointIf(std::make_unique<QDangerpoint0>(QDangerpoint(0)));
        copy_ptr<const QOverlapIf> qOverlapIf(std::make_unique<QOverlap0>(QOverlap(0)));
        TrackPacket15 trackPacket15(NidPacket(15), QDir(1), LPacket(97), QScale(0), VLoa(10),
                                    TLoa(14), NIter(2), lSections, qSectiontimerIfs,
                                    LEndsection(9), qSectiontimerIf, qEndtimerIf,
                                    qDangerpointIf, qOverlapIf);
    }
    catch(const NotPacketException & ex){
        return true;
    }
    return false;
}

bool createTrackPacket15JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 15},
            {"Q_DIR", 0},
            {"Q_SCALE", 1},
            {"L_PACKET", 217},
            {"V_LOA", 10},
            {"T_LOA", 14},
            {"N_ITER", 2},
            {"L_ENDSECTION", 1},
            {"qSectiontimerIf", {{"Q_SECTIONTIMER", 0}}},
            {"qEndtimerIf", {{"Q_ENDTIMER", 1}, {"T_ENDTIMER", 2}, {"D_ENDTIMERSTARTLOC", 3}}},
            {"qOverlapIf", {{"Q_OVERLAP", 1}, {"D_STARTOL", 10}, {"T_OL", 3}, {"D_OL", 4}, {"V_RELEASEOL", 2}}},
            {"qDangerpointIf", {{"Q_DANGERPOINT", 1}, {"D_DP", 14}, {"V_RELEASEDP", 7}}}
    };
    nlohmann::json lSection1 = {
            {"L_SECTION", 12}
    };
    nlohmann::json lSection2 = {
            {"L_SECTION", 13}
    };
    j["lSections"].emplace_back(lSection1);
    j["lSections"].emplace_back(lSection2);
    nlohmann::json qSectiontimer0 = {
            {"Q_SECTIONTIMER", 0}
    };
    nlohmann::json qSectiontimer1 = {
            {"Q_SECTIONTIMER", 1},
            {"T_SECTIONTIMER", 1},
            {"D_SECTIONTIMERSTOPLOC", 2}
    };
    j["qSectiontimerIfs"].emplace_back(qSectiontimer0);
    j["qSectiontimerIfs"].emplace_back(qSectiontimer1);
    try {
        TrackPacket15 trackPacket15(j);
        if (trackPacket15.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createTrackPacket15BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 15},
            {"Q_DIR", 0},
            {"Q_SCALE", 1},
            {"L_PACKET", 210},
            {"V_LOA", 10},
            {"T_LOA", 14},
            {"N_ITER", 2},
            {"L_ENDSECTION", 1},
            {"qSectiontimerIf", {{"Q_SECTIONTIMER", 0}}},
            {"qEndtimerIf", {{"Q_ENDTIMER", 1}, {"T_ENDTIMER", 2}, {"D_ENDTIMERSTARTLOC", 3}}},
            {"qOverlapIf", {{"Q_OVERLAP", 1}, {"D_STARTOL", 10}, {"T_OL", 3}, {"D_OL", 4}, {"V_RELEASEOL", 2}}},
            {"qDangerpointIf", {{"Q_DANGERPOINT", 1}, {"D_DP", 14}, {"V_RELEASEDP", 7}}}
    };
    nlohmann::json lSection1 = {
            {"L_SECTION", 12}
    };
    nlohmann::json lSection2 = {
            {"L_SECTION", 13}
    };
    j["lSections"].emplace_back(lSection1);
    j["lSections"].emplace_back(lSection2);
    nlohmann::json qSectiontimer0 = {
            {"Q_SECTIONTIMER", 0}
    };
    nlohmann::json qSectiontimer1 = {
            {"Q_SECTIONTIMER", 1},
            {"T_SECTIONTIMER", 1},
            {"D_SECTIONTIMERSTOPLOC", 2}
    };
    j["qSectiontimerIfs"].emplace_back(qSectiontimer0);
    j["qSectiontimerIfs"].emplace_back(qSectiontimer1);
    try {
        TrackPacket15 trackPacket15(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createTrackPacket15MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 15},
            {"Q_DIR", 0},
            {"Q_SCALE", 1},
            {"L_PACKET", 217},
            {"V_LOA", 10},
            {"T_LOA", 14},
            {"NID_C", 1},
            {"N_ITER", 2},
            {"L_ENDSECTION", 1},
            {"qSectiontimerIf", {{"Q_SECTIONTIMER", 0}}},
            {"qEndtimerIf", {{"Q_ENDTIMER", 1}, {"T_ENDTIMER", 2}, {"D_ENDTIMERSTARTLOC", 3}}},
            {"qOverlapIf", {{"Q_OVERLAP", 1}, {"D_STARTOL", 10}, {"T_OL", 3}, {"D_OL", 4}, {"V_RELEASEOL", 2}}},
            {"qDangerpointIf", {{"Q_DANGERPOINT", 1}, {"D_DP", 14}, {"V_RELEASEDP", 7}}}
    };
    nlohmann::json lSection1 = {
            {"L_SECTION", 12}
    };
    nlohmann::json lSection2 = {
            {"L_SECTION", 13}
    };
    j["lSections"].emplace_back(lSection1);
    j["lSections"].emplace_back(lSection2);
    nlohmann::json qSectiontimer0 = {
            {"Q_SECTIONTIMER", 0}
    };
    nlohmann::json qSectiontimer1 = {
            {"Q_SECTIONTIMER", 1},
            {"T_SECTIONTIMER", 1},
            {"D_SECTIONTIMERSTOPLOC", 2}
    };
    j["qSectiontimerIfs"].emplace_back(qSectiontimer0);
    j["qSectiontimerIfs"].emplace_back(qSectiontimer1);
    try {
        TrackPacket15 trackPacket15(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createTrackPacket15BadVectorSize() {
    nlohmann::json j = {
            {"NID_PACKET", 15},
            {"Q_DIR", 0},
            {"Q_SCALE", 1},
            {"L_PACKET", 232},
            {"V_LOA", 10},
            {"T_LOA", 14},
            {"N_ITER", 2},
            {"L_ENDSECTION", 1},
            {"qSectiontimerIf", {{"Q_SECTIONTIMER", 0}}},
            {"qEndtimerIf", {{"Q_ENDTIMER", 1}, {"T_ENDTIMER", 2}, {"D_ENDTIMERSTARTLOC", 3}}},
            {"qOverlapIf", {{"Q_OVERLAP", 1}, {"D_STARTOL", 10}, {"T_OL", 3}, {"D_OL", 4}, {"V_RELEASEOL", 2}}},
            {"qDangerpointIf", {{"Q_DANGERPOINT", 1}, {"D_DP", 14}, {"V_RELEASEDP", 7}}}
    };
    nlohmann::json lSection1 = {
            {"L_SECTION", 12}
    };
    nlohmann::json lSection2 = {
            {"L_SECTION", 13}
    };
    nlohmann::json lSection3 = {
            {"L_SECTION", 11}
    };
    j["lSections"].emplace_back(lSection1);
    j["lSections"].emplace_back(lSection2);
    j["lSections"].emplace_back(lSection3);
    nlohmann::json qSectiontimer0 = {
            {"Q_SECTIONTIMER", 0}
    };
    nlohmann::json qSectiontimer1 = {
            {"Q_SECTIONTIMER", 1},
            {"T_SECTIONTIMER", 1},
            {"D_SECTIONTIMERSTOPLOC", 2}
    };
    j["qSectiontimerIfs"].emplace_back(qSectiontimer0);
    j["qSectiontimerIfs"].emplace_back(qSectiontimer1);
    try {
        TrackPacket15 trackPacket15(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createTrackPacket39() {
    try {
        TrackPacket39 trackPacket39(NidPacket(39), QDir(1), LPacket(48), QScale(0), DTraction(1),
                                    MTraction(10));
        if (trackPacket39.GetNidPacket() == NidPacket(39) && trackPacket39.GetLPacket() == LPacket(48) &&
            trackPacket39.GetQDir() == QDir(1) && trackPacket39.GetQScale() == QScale(0) &&
            trackPacket39.GetDTraction() == DTraction(1) && trackPacket39.GetMTraction() == MTraction(10))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createTrackPacket39JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 39},
            {"Q_DIR", 0},
            {"Q_SCALE", 1},
            {"L_PACKET", 48},
            {"D_TRACTION", 10},
            {"M_TRACTION", 14}
    };
    try {
        TrackPacket39 trackPacket39(j);
        if (trackPacket39.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createTrackPacket39BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 39},
            {"Q_DIR", 0},
            {"Q_SCALE", 1},
            {"L_PACKET", 58},
            {"D_TRACTION", 10},
            {"M_TRACTION", 14}
    };
    try {
        TrackPacket39 trackPacket39(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createTrackPacket39MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 39},
            {"Q_DIR", 0},
            {"Q_SCALE", 1},
            {"L_PACKET", 48},
            {"D_TRACTION", 10},
            {"M_TRACTION", 14},
            {"N_ITER", 1}
    };
    try {
        TrackPacket39 trackPacket39(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

int main () {
    assert(createNidOperationalWithAE());
    assert(createNidOperationalNotFAfterFirstF());
    assert(createNidOperational());
    assert(createNidOperationalJSON());
    assert(setNidOperationalJSON());
    assert(setNidOperational());
    assert(toJsonNidOperational());
    assert(createTrackPacket15());
    assert(createTrackPacket15Nullptr());
    assert(createTrackPacket15JSON());
    assert(createTrackPacket15BadLength());
    assert(createTrackPacket15MoreVar());
    assert(createTrackPacket15BadVectorSize());
    assert(createTrackPacket39());
    assert(createTrackPacket39JSON());
    assert(createTrackPacket39BadLength());
    assert(createTrackPacket39MoreVar());
}
