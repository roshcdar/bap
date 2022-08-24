#pragma once
#include <memory>
#include <iostream>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/NidPacket.hpp>
#include <variables_230_340_360/LPacket.hpp>

class Packet {
public:
    Packet(const NidPacket & nidPacket, const LPacket & lPacket);
    explicit Packet(const nlohmann::json & j);
    virtual ~Packet() = default;
    [[nodiscard]] virtual nlohmann::json ToJson() const;
    friend std::ostream & operator << ( std::ostream & os, const Packet & packet);
    [[nodiscard]] const NidPacket &  GetNidPacket() const;
    [[nodiscard]] const LPacket & GetLPacket() const;
protected:
    virtual void Print (std::ostream & os) const;
    virtual void PrintPacketName(std::ostream & os) const = 0;
    NidPacket nidPacket;
    LPacket lPacket;
};
