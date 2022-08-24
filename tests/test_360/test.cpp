#include <variables_360/NotVariableException.hpp>
#include <variables_360/NidOperational.hpp>
#include <packets_360/AllPackets.hpp>
#include <nlohmann/json.hpp>
#include <vector>
#include <cassert>

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

/**
 * NID_OPERATIONAL can have in hexadecimal notation values A-E
 */
bool createNidOperationalWithAE() {
    try {
        NidOperational nidOperational(0x0a9d9999);
        if (nidOperational.GetName() == "NID_OPERATIONAL" && nidOperational.GetValue() == 0x0a9d9999)
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

bool createPacket40() {
    try {
        TrackPacket40 trackPacket40(NidPacket(40), QDir(1), LPacket(50), QScale(0),
                                    DCurrent(1000), MCurrent(1000));
        if (trackPacket40.GetNidPacket() == NidPacket(40) && trackPacket40.GetQDir() == QDir(1) &&
            trackPacket40.GetLPacket() == LPacket(50) && trackPacket40.GetQScale() == QScale(0) &&
            trackPacket40.GetDCurrent() == DCurrent(1000) && trackPacket40.GetMCurrent() == MCurrent(1000))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket40JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 40},
            {"Q_DIR", 0},
            {"Q_SCALE", 0},
            {"L_PACKET", 50},
            {"D_CURRENT", 10},
            {"M_CURRENT", 11}
    };
    try {
        TrackPacket40 trackPacket40(j);
        if (trackPacket40.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket40BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 40},
            {"Q_DIR", 0},
            {"Q_SCALE", 0},
            {"L_PACKET", 51},
            {"D_CURRENT", 10},
            {"M_CURRENT", 11}
    };
    try {
        TrackPacket40 trackPacket40(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket40MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 40},
            {"Q_DIR", 0},
            {"Q_SCALE", 0},
            {"L_PACKET", 50},
            {"D_CURRENT", 10},
            {"M_CURRENT", 11},
            {"N_ITER", 1}
    };
    try {
        TrackPacket40 trackPacket40(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket64() {
    try {
        TrackPacket64 trackPacket64(NidPacket(64), QDir(1), LPacket(23));
        if (trackPacket64.GetNidPacket() == NidPacket(64) && trackPacket64.GetQDir() == QDir(1) &&
            trackPacket64.GetLPacket() == LPacket(23))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket64JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 64},
            {"Q_DIR", 0},
            {"L_PACKET", 23}
    };
    try {
        TrackPacket64 trackPacket64(j);
        if (trackPacket64.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket64BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 64},
            {"Q_DIR", 0},
            {"L_PACKET", 13}
    };
    try {
        TrackPacket64 trackPacket64(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket64MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 64},
            {"Q_DIR", 0},
            {"L_PACKET", 23},
            {"N_ITER", 1}
    };
    try {
        TrackPacket64 trackPacket64(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createTrackPacket39() {
    try {
        copy_ptr<const MVoltageIf> mVoltageIf(std::make_unique<MVoltageFollow>(MVoltage(1), NidCtraction(9)));
        TrackPacket39 trackPacket39(NidPacket(39), QDir(1), LPacket(54), QScale(0), DTraction(1),
                                    mVoltageIf);
        if (trackPacket39.GetNidPacket() == NidPacket(39) && trackPacket39.GetLPacket() == LPacket(54) &&
            trackPacket39.GetQDir() == QDir(1) && trackPacket39.GetQScale() == QScale(0) &&
            trackPacket39.GetDTraction() == DTraction(1) && trackPacket39.GetMVoltageIf()->GetMVoltage() == mVoltageIf->GetMVoltage())
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
            {"L_PACKET", 44},
            {"D_TRACTION", 10},
            {"mVoltageIf", {{"M_VOLTAGE", 0}}}
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
            {"L_PACKET", 54},
            {"D_TRACTION", 10},
            {"mVoltageIf", {{"M_VOLTAGE", 0}}}
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
            {"L_PACKET", 44},
            {"D_TRACTION", 10},
            {"N_ITER", 0},
            {"mVoltageIf", {{"M_VOLTAGE", 0}}}
    };
    try {
        TrackPacket39 trackPacket39(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createTrackPacket39Nullptr() {
    try {
        copy_ptr<const MVoltageIf> mVoltageIf(nullptr);
        TrackPacket39 trackPacket39(NidPacket(39), QDir(1), LPacket(40), QScale(0), DTraction(1),
                                    mVoltageIf);
    }
    catch(const NotPacketException & ex){
        return true;
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
        TrackPacket15 trackPacket15(NidPacket(15), QDir(1), LPacket(123), QScale(0), VEma(10),
                                    TEma(14), NIter(2), lSections, qSectiontimerIfs, LEndsection(9),
                                    qSectiontimerIf, qEndtimerIf, qDangerpointIf, qOverlapIf);
        if (trackPacket15.GetNidPacket() == NidPacket(15) && trackPacket15.GetLPacket() == LPacket(123) &&
            trackPacket15.GetQDir() == QDir(1) && trackPacket15.GetQScale() == QScale(0) &&
            trackPacket15.GetVEma() == VEma(10) && trackPacket15.GetTEma() == TEma(14) &&
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
        TrackPacket15 trackPacket15(NidPacket(15), QDir(1), LPacket(97), QScale(0), VEma(10),
                                    TEma(14), NIter(2), lSections, qSectiontimerIfs,
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
            {"V_EMA", 10},
            {"T_EMA", 14},
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
            {"V_EMA", 10},
            {"T_EMA", 14},
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
            {"V_EMA", 10},
            {"T_EMA", 14},
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
            {"V_EMA", 10},
            {"T_EMA", 14},
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

int main () {
    assert(createNidOperationalNotFAfterFirstF());
    assert(createNidOperational());
    assert(createNidOperationalWithAE());
    assert(createNidOperationalJSON());
    assert(setNidOperationalJSON());
    assert(setNidOperational());
    assert(toJsonNidOperational());
    assert(createPacket40());
    assert(createPacket40JSON());
    assert(createPacket40BadLength());
    assert(createPacket40MoreVar());
    assert(createPacket64());
    assert(createPacket64JSON());
    assert(createPacket64BadLength());
    assert(createPacket64MoreVar());
    assert(createTrackPacket39());
    assert(createTrackPacket39JSON());
    assert(createTrackPacket39BadLength());
    assert(createTrackPacket39MoreVar());
    assert(createTrackPacket39Nullptr());
    assert(createTrackPacket15());
    assert(createTrackPacket15JSON());
    assert(createTrackPacket15BadLength());
    assert(createTrackPacket15MoreVar());
    assert(createTrackPacket15Nullptr());
    assert(createTrackPacket15BadVectorSize());
}
