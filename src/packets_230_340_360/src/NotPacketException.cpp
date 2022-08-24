#include "../include/NotPacketException.hpp"

const char * NotPacketException::what() const noexcept {
    return "NotPacketException: this value can't be a packet.";
}
