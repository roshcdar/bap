#include <variables_230_340_360/LPacket.hpp>
#include <variables_230_340_360/NidMn.hpp>
#include <variables_230_340_360/NidRadio.hpp>
#include <variables_230_340_360/NotVariableException.hpp>
#include <packets_230_340_360/TrackPacket42.hpp>
#include <packets_230_340_360/TrackPacket71.hpp>
#include <packets_230_340_360/TrackPacket66.hpp>
#include <packets_230_340_360/TrackPacket65.hpp>
#include <packets_230_340_360/TrackPacket58.hpp>
#include <packets_230_340_360/TrackPacket57.hpp>
#include <packets_230_340_360/TrackPacket45.hpp>
#include <packets_230_340_360/TrackPacket139.hpp>
#include <packets_230_340_360/TrackPacket138.hpp>
#include <packets_230_340_360/TrackPacket131.hpp>
#include <packets_230_340_360/NotPacketException.hpp>
#include <nlohmann/json.hpp>
#include <cassert>

/**
 * Check creation of variable
 */
bool createVariable() {
    try {
        LPacket lPacket(42);
        if (lPacket.GetName() == "L_PACKET" && lPacket.GetValue() == 42)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}
/**
 * Check creation of variable from JSON object
 */
bool createVariableJSON() {
    nlohmann::json j = {
            {"L_PACKET", 10}
    };
    try {
        LPacket lPacket(j);
        if (lPacket.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

/**
 * Check set value from JSON object to variable
 */
bool setVariableJSON() {
    nlohmann::json j;
    j["L_PACKET"] = 100;
    try {
        LPacket lPacket(10);
        lPacket.SetValue(j, "");
        if (lPacket.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

/**
 * Check set value to variable
 */
bool setVariable() {
    try {
        LPacket lPacket(11);
        lPacket.SetValue(12);
        if (lPacket.GetValue() == 12)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}
/**
 * Check conversion of variable to JSON format
 */
bool toJsonVariable() {
    nlohmann::json j = {
            {"L_PACKET3", 4}
    };
    nlohmann::json result;
    try {
        LPacket lPacket(4);
        lPacket.ToJson(result, "3");
        if (result == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

/**
 * variable can't have value that is bigger than it's maximum value
 */
bool createVariableValueBiggerThanMax() {
    nlohmann::json j = {
            {"L_PACKET", 8192}
    };
    try {
        LPacket lPacket(j);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

/**
 * variable can't have value that is smaller than it's minimum value
 */
bool createVariableValueLessThanMin() {
    nlohmann::json j = {
            {"VARIABLE", -16800}
    };
    try {
        Variable<std::int16_t, 14> var("VARIABLE", j);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

/**
 * NID_MN can't have in hexadecimal notation value 0xffffff
 */
bool createNidMnOnlyF() {
    try {
        NidMn nidMn(0xffffff);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

/**
 * NID_MN can't have in hexadecimal notation values A-E
 */
bool createNidMnWithAE() {
    try {
        NidMn nidMn(0x1d2aff);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

/**
 * NID_MN can't have different values than F
 * after first F in it's hexadecimal notation
 */
bool createNidMnNotFAfterFirstF() {
    try {
        NidMn nidMn(0x12f1ff);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

bool createNidMn() {
    try {
        NidMn nidMn(0x1323ff);
        if (nidMn.GetName() == "NID_MN" && nidMn.GetValue() == 0x1323ff)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool createNidMnJSON() {
    nlohmann::json j = {
            {"NID_MN", 7}
    };
    try {
        NidMn nidMn(j);
        if (nidMn.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool setNidMnJSON() {
    nlohmann::json j;
    j["NID_MN"] = 3;
    try {
        NidMn nidMn(0);
        nidMn.SetValue(j);
        if (nidMn.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool setNidMn() {
    try {
        NidMn nidMn(4);
        nidMn.SetValue(6);
        if (nidMn.GetValue() == 6)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool toJsonNidMn() {
    nlohmann::json j = {
            {"NID_MN5", 31}
    };
    nlohmann::json result;
    try {
        NidMn nidMn(31);
        nidMn.ToJson(result, "5");
        if (result == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool createNidMnValueBiggerThanMax() {
    nlohmann::json j = {
            {"NID_MN", 33554431}
    };
    try {
        NidMn nidMn(j);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

/**
 * NID_RADIO can't have in hexadecimal notation values A-E
 */
bool createNidRadioWithAE() {
    try {
        NidRadio nidRadio(0x1d2affffffffffff);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

/**
 * NID_RADIO can't have different values than F
 * after first F in it's hexadecimal notation
 */
bool createNidRadioNotFAfterFirstF() {
    try {
        NidRadio nidRadio(0x12f1ffffffffffff);
    }
    catch(const NotVariableException & ex) {
        return true;
    }
    return false;
}

bool createNidRadio() {
    try {
        NidRadio nidRadio(0x1323ffffffffffff);
        if (nidRadio.GetName() == "NID_RADIO" && nidRadio.GetValue() == 0x1323ffffffffffff)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool createNidRadioJSON() {
    nlohmann::json j = {
            {"NID_RADIO", 5}
    };
    try {
        NidRadio nidRadio(j);
        if (nidRadio.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool setNidRadioJSON() {
    nlohmann::json j;
    j["NID_RADIO"] = 1;
    try {
        NidRadio nidRadio(15);
        nidRadio.SetValue(j);
        if (nidRadio.ToJson() == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool setNidRadio() {
    try {
        NidRadio nidRadio(31);
        nidRadio.SetValue(63);
        if (nidRadio.GetValue() == 63)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool toJsonNidRadio() {
    nlohmann::json j = {
            {"NID_RADIO2", 31}
    };
    nlohmann::json result;
    try {
        NidRadio nidRadio(31);
        nidRadio.ToJson(result, "2");
        if (result == j)
            return true;
    }
    catch(const NotVariableException & ex) {
        return false;
    }
    return false;
}

bool createPacket42() {
    try {
        TrackPacket42 trackPacket42(NidPacket(42), QDir(1), LPacket(113), QRbc(1), NidC(1), NidRbc(1), NidRadio(1),
                                    QSleepsession(1));
        if (trackPacket42.GetNidPacket() == NidPacket(42) && trackPacket42.GetQDir() == QDir(1) &&
            trackPacket42.GetLPacket() == LPacket(113) && trackPacket42.GetQRbc() == QRbc(1) &&
            trackPacket42.GetNidC() == NidC(1) && trackPacket42.GetNidRadio() == NidRadio(1) &&
            trackPacket42.GetNidRbc() == NidRbc(1) && trackPacket42.GetQSleepsession() == QSleepsession(1))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket42JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 42},
            {"Q_DIR", 0},
            {"Q_RBC", 1},
            {"NID_C", 1},
            {"NID_RBC", 3},
            {"NID_RADIO", 1},
            {"Q_SLEEPSESSION", 0},
            {"L_PACKET", 113}
    };
    try {
        TrackPacket42 trackPacket42(j);
        if (trackPacket42.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket42BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 42},
            {"Q_DIR", 0},
            {"Q_RBC", 1},
            {"NID_C", 1},
            {"NID_RBC", 3},
            {"NID_RADIO", 1},
            {"Q_SLEEPSESSION", 0},
            {"L_PACKET", 13}
    };
    try {
        TrackPacket42 trackPacket42(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket42MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 42},
            {"Q_DIR", 0},
            {"Q_RBC", 1},
            {"NID_C", 1},
            {"NID_RBC", 3},
            {"NID_RADIO", 1},
            {"L_ADHESION", 14},
            {"Q_SLEEPSESSION", 0},
            {"L_PACKET", 113}
    };
    try {
        TrackPacket42 trackPacket42(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket71() {
    try {
        TrackPacket71 trackPacket71(NidPacket(71), QDir(1), LPacket(56), QScale(3),DAdhesion(1), LAdhesion(3), MAdhesion(1));
        if (trackPacket71.GetNidPacket() == NidPacket(71) && trackPacket71.GetQDir() == QDir(1) &&
            trackPacket71.GetLPacket() == LPacket(56) && trackPacket71.GetQScale() == QScale(3) &&
            trackPacket71.GetDAdhesion() == DAdhesion(1) && trackPacket71.GetLAdhesion() == LAdhesion(3) &&
            trackPacket71.GetMAdhesion() == MAdhesion(1))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket71JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 71},
            {"Q_DIR", 1},
            {"Q_SCALE", 0},
            {"L_PACKET", 56},
            {"D_ADHESION", 1},
            {"L_ADHESION", 14},
            {"M_ADHESION", 0}
    };
    try {
        TrackPacket71 trackPacket71(j);
        if (trackPacket71.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket71BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 71},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 100},
            {"D_ADHESION", 0},
            {"L_ADHESION", 22},
            {"M_ADHESION", 1}
    };
    try {
        TrackPacket71 trackPacket71(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket71MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 71},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 56},
            {"D_ADHESION", 0},
            {"L_ADHESION", 22},
            {"N_ITER", 5},
            {"M_ADHESION", 1}
    };
    try {
        TrackPacket71 trackPacket71(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket66() {
    try {
        TrackPacket66 trackPacket66(NidPacket(66), QDir(1), LPacket(31), NidTsr(30));
        if (trackPacket66.GetNidPacket() == NidPacket(66) && trackPacket66.GetQDir() == QDir(1) &&
            trackPacket66.GetLPacket() == LPacket(31) && trackPacket66.GetNidTsr() == NidTsr(30))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket66JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 66},
            {"Q_DIR", 1},
            {"NID_TSR", 200},
            {"L_PACKET", 31},
    };
    try {
        TrackPacket66 trackPacket66(j);
        if (trackPacket66.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket66BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 66},
            {"Q_DIR", 1},
            {"NID_TSR", 1},
            {"L_PACKET", 42}
    };
    try {
        TrackPacket66 trackPacket66(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket66MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 66},
            {"Q_DIR", 1},
            {"NID_TSR", 1},
            {"L_PACKET", 31},
            {"D_ADHESION", 0}
    };
    try {
        TrackPacket66 trackPacket66(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket65() {
    try {
        TrackPacket65 trackPacket65(NidPacket(65), QDir(1), LPacket(71), QScale(1), NidTsr(30),
                                    DTsr(2), LTsr(8), QFront(0), VTsr(14));
        if (trackPacket65.GetNidPacket() == NidPacket(65) && trackPacket65.GetQDir() == QDir(1) &&
            trackPacket65.GetLPacket() == LPacket(71) && trackPacket65.GetQScale() == QScale(1) && trackPacket65.GetNidTsr() == NidTsr(30) &&
            trackPacket65.GetDTsr() == DTsr(2) && trackPacket65.GetLTsr() == LTsr(8) && trackPacket65.GetQFront() == QFront(0) &&
            trackPacket65.GetVTsr() == VTsr(14))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket65JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 65},
            {"Q_DIR", 1},
            {"NID_TSR", 200},
            {"L_PACKET", 71},
            {"Q_SCALE", 1},
            {"L_TSR", 1},
            {"Q_FRONT", 0},
            {"V_TSR", 15},
            {"D_TSR", 11}
    };
    try {
        TrackPacket65 trackPacket65(j);
        if (trackPacket65.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket65BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 65},
            {"Q_DIR", 1},
            {"NID_TSR", 1},
            {"L_TSR", 12},
            {"Q_SCALE", 1},
            {"V_TSR", 3},
            {"Q_FRONT", 1},
            {"D_TSR", 12},
            {"L_PACKET", 420}
    };
    try {
        TrackPacket65 trackPacket65(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket65MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 65},
            {"Q_DIR", 1},
            {"NID_TSR", 200},
            {"L_PACKET", 71},
            {"Q_SCALE", 1},
            {"L_TSR", 1},
            {"Q_FRONT", 0},
            {"V_TSR", 15},
            {"D_TSR", 11},
            {"NID_RADIO", 1}
    };
    try {
        TrackPacket65 trackPacket65(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

/**
 * Checks that packet can be created by constructor with concrete variables
 */
bool createPacket58() {
    try {
        std::vector<DLoc> dLocs;
        dLocs.emplace_back(DLoc(101));
        dLocs.emplace_back(DLoc(200));
        std::vector<QLgtloc> qLgtlocs;
        qLgtlocs.emplace_back(QLgtloc(1));
        qLgtlocs.emplace_back(QLgtloc(0));
        TrackPacket58 trackPacket58(NidPacket(58), QDir(1), LPacket(88), QScale(1), TCycloc(100), DCycloc(1000), MLoc(5), NIter(2), dLocs, qLgtlocs);
        if (trackPacket58.GetNidPacket() == NidPacket(58) && trackPacket58.GetQDir() == QDir(1) &&
            trackPacket58.GetLPacket() == LPacket(88) && trackPacket58.GetQScale() == QScale(1) && trackPacket58.GetTCycloc() == TCycloc(100) &&
            trackPacket58.GetDCycloc() == DCycloc(1000) && trackPacket58.GetMLoc() == MLoc(5) && trackPacket58.GetNIter() == NIter(2) &&
            trackPacket58.GetDLocs() == dLocs && trackPacket58.GetQLgtlocs() == qLgtlocs)
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

/**
 * Checks that packet can be created by constructor with JSON object
 */
bool createPacket58JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 58},
            {"Q_DIR", 1},
            {"L_PACKET", 88},
            {"Q_SCALE", 1},
            {"N_ITER", 2},
            {"T_CYCLOC", 1},
            {"D_CYCLOC", 10},
            {"M_LOC", 4}
    };
    nlohmann::json dLoc1, dLoc2, qLgtloc1, qLgtloc2;
    dLoc1["D_LOC"] = 1;
    dLoc2["D_LOC"] = 2;
    qLgtloc1["Q_LGTLOC"] = 0;
    qLgtloc2["Q_LGTLOC"] = 1;
    j["dLocs"].emplace_back(dLoc1);
    j["dLocs"].emplace_back(dLoc2);
    j["qLgtlocs"].emplace_back(qLgtloc1);
    j["qLgtlocs"].emplace_back(qLgtloc2);
    try {
        TrackPacket58 trackPacket58(j);
        if (trackPacket58.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

/**
 * Checks, that packet with bad length can't be created
 */
bool createPacket58BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 58},
            {"Q_DIR", 1},
            {"L_PACKET", 98},
            {"Q_SCALE", 1},
            {"N_ITER", 2},
            {"T_CYCLOC", 1},
            {"D_CYCLOC", 10},
            {"M_LOC", 4}
    };
    nlohmann::json dLoc1, dLoc2, qLgtloc1, qLgtloc2;
    dLoc1["D_LOC"] = 1;
    dLoc2["D_LOC"] = 2;
    qLgtloc1["Q_LGTLOC"] = 0;
    qLgtloc2["Q_LGTLOC"] = 1;
    j["dLocs"].emplace_back(dLoc1);
    j["dLocs"].emplace_back(dLoc2);
    j["qLgtlocs"].emplace_back(qLgtloc1);
    j["qLgtlocs"].emplace_back(qLgtloc2);
    try {
        TrackPacket58 trackPacket58(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

/**
 * Checks, that JSON object with more than defined number of variables can't be accepted
 */
bool createPacket58MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 58},
            {"Q_DIR", 1},
            {"L_PACKET", 88},
            {"Q_SCALE", 1},
            {"N_ITER", 2},
            {"T_CYCLOC", 1},
            {"D_CYCLOC", 10},
            {"M_LOC", 4},
            {"N_ITER2", 2}
    };
    nlohmann::json dLoc1, dLoc2, qLgtloc1, qLgtloc2;
    dLoc1["D_LOC"] = 1;
    dLoc2["D_LOC"] = 2;
    qLgtloc1["Q_LGTLOC"] = 0;
    qLgtloc2["Q_LGTLOC"] = 1;
    j["dLocs"].emplace_back(dLoc1);
    j["dLocs"].emplace_back(dLoc2);
    j["qLgtlocs"].emplace_back(qLgtloc1);
    j["qLgtlocs"].emplace_back(qLgtloc2);
    try {
        TrackPacket58 trackPacket58(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

/**
 * Checks, if vectors' sizes are equal to N_ITER's value
 */
bool createPacket58BadVectorSize() {
    nlohmann::json j = {
            {"NID_PACKET", 58},
            {"Q_DIR", 1},
            {"L_PACKET", 88},
            {"Q_SCALE", 1},
            {"N_ITER", 2},
            {"T_CYCLOC", 1},
            {"D_CYCLOC", 10},
            {"M_LOC", 4},
            {"N_ITER2", 2}
    };
    nlohmann::json dLoc1, qLgtloc1, qLgtloc2;
    dLoc1["D_LOC"] = 1;
    qLgtloc1["Q_LGTLOC"] = 0;
    qLgtloc2["Q_LGTLOC"] = 1;
    j["dLocs"].emplace_back(dLoc1);
    j["qLgtlocs"].emplace_back(qLgtloc1);
    j["qLgtlocs"].emplace_back(qLgtloc2);
    try {
        TrackPacket58 trackPacket58(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket57() {
    try {
        TrackPacket57 trackPacket57(NidPacket(57), QDir(1), LPacket(49),
                                    TMar(200), TTimeoutrqst(100), TCycrqst(45));
        if (trackPacket57.GetNidPacket() == NidPacket(57) && trackPacket57.GetQDir() == QDir(1) &&
            trackPacket57.GetLPacket() == LPacket(49) && trackPacket57.GetTMar() == TMar(200) &&
            trackPacket57.GetTTimeoutrqst() == TTimeoutrqst(100) && trackPacket57.GetTCycrqst() == TCycrqst(45))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket57JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 57},
            {"Q_DIR", 1},
            {"L_PACKET", 49},
            {"T_MAR", 12},
            {"T_TIMEOUTRQST", 45},
            {"T_CYCRQST", 55}
    };
    try {
        TrackPacket57 trackPacket57(j);
        if (trackPacket57.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket57BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 57},
            {"Q_DIR", 1},
            {"L_PACKET", 39},
            {"T_MAR", 12},
            {"T_TIMEOUTRQST", 45},
            {"T_CYCRQST", 55}
    };
    try {
        TrackPacket57 trackPacket57(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket57MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 57},
            {"Q_DIR", 1},
            {"L_PACKET", 49},
            {"T_MAR", 12},
            {"T_TIMEOUTRQST", 45},
            {"T_CYCRQST", 55},
            {"N_ITER", 5}
    };
    try {
        TrackPacket57 trackPacket57(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket45() {
    try {
        TrackPacket45 trackPacket45(NidPacket(45), QDir(0), LPacket(47), NidMn(335));
        if (trackPacket45.GetNidPacket() == NidPacket(45) && trackPacket45.GetQDir() == QDir(0) &&
            trackPacket45.GetLPacket() == LPacket(47) && trackPacket45.GetNidMn() == NidMn(335))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket45JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 45},
            {"Q_DIR", 1},
            {"L_PACKET", 47},
            {"NID_MN", 33}
    };
    try {
        TrackPacket45 trackPacket45(j);
        if (trackPacket45.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket45BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 45},
            {"Q_DIR", 1},
            {"L_PACKET", 75},
            {"NID_MN", 33}
    };
    try {
        TrackPacket45 trackPacket45(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket45MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 45},
            {"Q_DIR", 0},
            {"L_PACKET", 47},
            {"NID_MN", 33},
            {"NID_C", 1}
    };
    try {
        TrackPacket45 trackPacket45(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket139() {
    try {
        TrackPacket139 trackPacket139(NidPacket(139), QDir(0), LPacket(47), QScale(1), DReverse(1001), VReverse(101));
        if (trackPacket139.GetNidPacket() == NidPacket(139) && trackPacket139.GetQDir() == QDir(0) &&
            trackPacket139.GetLPacket() == LPacket(47) && trackPacket139.GetQScale() == QScale(1) &&
            trackPacket139.GetDReverse() == DReverse(1001) && trackPacket139.GetVReverse() == VReverse(101))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket139JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 139},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 47},
            {"D_REVERSE", 33},
            {"V_REVERSE", 14}
    };
    try {
        TrackPacket139 trackPacket139(j);
        if (trackPacket139.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket139BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 139},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 57},
            {"D_REVERSE", 33},
            {"V_REVERSE", 14}
    };
    try {
        TrackPacket139 trackPacket139(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket139MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 139},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 47},
            {"D_REVERSE", 33},
            {"V_REVERSE", 14},
            {"NID_C", 1}
    };
    try {
        TrackPacket139 trackPacket139(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket138() {
    try {
        TrackPacket138 trackPacket138(NidPacket(138), QDir(0), LPacket(55), QScale(1), DStartreverse(111), LReversearea(10));
        if (trackPacket138.GetNidPacket() == NidPacket(138) && trackPacket138.GetQDir() == QDir(0) &&
            trackPacket138.GetLPacket() == LPacket(55) && trackPacket138.GetQScale() == QScale(1) &&
            trackPacket138.GetDStartreverse() == DStartreverse(111) && trackPacket138.GetLReversearea() == LReversearea(10))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket138JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 138},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 55},
            {"D_STARTREVERSE", 33},
            {"L_REVERSEAREA", 14}
    };
    try {
        TrackPacket138 trackPacket138(j);
        if (trackPacket138.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket138BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 138},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 56},
            {"D_STARTREVERSE", 33},
            {"L_REVERSEAREA", 14}
    };
    try {
        TrackPacket138 trackPacket138(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket138MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 138},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 55},
            {"D_STARTREVERSE", 33},
            {"N_ITER", 0},
            {"L_REVERSEAREA", 14}
    };
    try {
        TrackPacket138 trackPacket138(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket131() {
    try {
        TrackPacket131 trackPacket131(NidPacket(131), QDir(0), LPacket(129), QScale(1),
                                      DRbctr(9), NidC(14), NidRbc(7), NidRadio(3), QSleepsession(1));
        if (trackPacket131.GetNidPacket() == NidPacket(131) && trackPacket131.GetQDir() == QDir(0) &&
            trackPacket131.GetLPacket() == LPacket(129) && trackPacket131.GetQScale() == QScale(1) &&
            trackPacket131.GetDRbctr() == DRbctr(9) && trackPacket131.GetNidC() == NidC(14) &&
            trackPacket131.GetNidRbc() == NidRbc(7) && trackPacket131.GetNidRadio() == NidRadio(3) &&
            trackPacket131.GetQSleepsession() == QSleepsession(1))
            return true;
    }
    catch(const NotPacketException & ex){
        return false;
    }
    return false;
}

bool createPacket131JSON() {
    nlohmann::json j = {
            {"NID_PACKET", 131},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 129},
            {"D_RBCTR", 33},
            {"NID_C", 14},
            {"NID_RADIO", 3},
            {"NID_RBC", 7},
            {"Q_SLEEPSESSION", 0}
    };
    try {
        TrackPacket131 trackPacket131(j);
        if (trackPacket131.ToJson() == j)
            return true;
    }
    catch (const NotPacketException & ex) {
        return false;
    }
    return false;
}

bool createPacket131BadLength() {
    nlohmann::json j = {
            {"NID_PACKET", 131},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 128},
            {"D_RBCTR", 33},
            {"NID_C", 14},
            {"NID_RADIO", 3},
            {"NID_RBC", 7},
            {"Q_SLEEPSESSION", 0}
    };
    try {
        TrackPacket131 trackPacket131(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

bool createPacket131MoreVar() {
    nlohmann::json j = {
            {"NID_PACKET", 131},
            {"Q_DIR", 1},
            {"Q_SCALE", 1},
            {"L_PACKET", 129},
            {"D_RBCTR", 33},
            {"NID_C", 14},
            {"NID_RADIO", 3},
            {"NID_RBC", 7},
            {"Q_SLEEPSESSION", 0},
            {"NID_MN", 1}
    };
    try {
        TrackPacket131 trackPacket131(j);
    }
    catch (const NotPacketException & ex) {
        return true;
    }
    return false;
}

int main () {
    assert(createVariable());
    assert(createVariableValueBiggerThanMax());
    assert(createVariableValueLessThanMin());
    assert(createVariableJSON());
    assert(setVariable());
    assert(setVariableJSON());
    assert(toJsonVariable());
    assert(createNidMnOnlyF());
    assert(createNidMnWithAE());
    assert(createNidMnNotFAfterFirstF());
    assert(createNidMn());
    assert(createNidMnJSON());
    assert(setNidMnJSON());
    assert(setNidMn());
    assert(toJsonNidMn());
    assert(createNidMnValueBiggerThanMax());
    assert(createNidRadioWithAE());
    assert(createNidRadioNotFAfterFirstF());
    assert(createNidRadio());
    assert(createNidRadioJSON());
    assert(setNidRadioJSON());
    assert(setNidRadio());
    assert(toJsonNidRadio());
    assert(createPacket42());
    assert(createPacket42JSON());
    assert(createPacket42BadLength());
    assert(createPacket42MoreVar());
    assert(createPacket71());
    assert(createPacket71JSON());
    assert(createPacket71BadLength());
    assert(createPacket71MoreVar());
    assert(createPacket66());
    assert(createPacket66JSON());
    assert(createPacket66BadLength());
    assert(createPacket66MoreVar());
    assert(createPacket65());
    assert(createPacket65JSON());
    assert(createPacket65BadLength());
    assert(createPacket65MoreVar());
    assert(createPacket58());
    assert(createPacket58JSON());
    assert(createPacket58BadLength());
    assert(createPacket58MoreVar());
    assert(createPacket58BadVectorSize());
    assert(createPacket57());
    assert(createPacket57JSON());
    assert(createPacket57BadLength());
    assert(createPacket57MoreVar());
    assert(createPacket45());
    assert(createPacket45JSON());
    assert(createPacket45BadLength());
    assert(createPacket45MoreVar());
    assert(createPacket139());
    assert(createPacket139JSON());
    assert(createPacket139BadLength());
    assert(createPacket139MoreVar());
    assert(createPacket138());
    assert(createPacket138JSON());
    assert(createPacket138BadLength());
    assert(createPacket138MoreVar());
    assert(createPacket131());
    assert(createPacket131JSON());
    assert(createPacket131BadLength());
    assert(createPacket131MoreVar());
}
