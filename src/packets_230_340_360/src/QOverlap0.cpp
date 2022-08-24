#include "../include/QOverlap0.hpp"
#include "../include/NotPacketException.hpp"

QOverlap0::QOverlap0(const QOverlap & qOverlap) : QOverlapIf(qOverlap) {
    Check();
}

QOverlap0::QOverlap0(const nlohmann::json & j) : QOverlapIf(j) {
    if (j.size() != 1)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QOverlapIf> QOverlap0::Clone() const {
    return std::make_unique<QOverlap0>(*this);
}

void QOverlap0::Check() const {
    if (qOverlap.GetValue())
        throw NotPacketException();
}