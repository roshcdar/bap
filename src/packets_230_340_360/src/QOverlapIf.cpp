#include "../include/QOverlapIf.hpp"

QOverlapIf::QOverlapIf(const QOverlap & qOverlap) : qOverlap(qOverlap) {}

QOverlapIf::QOverlapIf(const nlohmann::json & j) : qOverlap(j) {}

nlohmann::json QOverlapIf::ToJson() const {
    return qOverlap.ToJson();
}

void  QOverlapIf::Print ( std::ostream & os ) const {
    os << qOverlap;
}

std::ostream & operator << ( std::ostream & os, const QOverlapIf & qOverlapIf) {
    qOverlapIf.Print(os);
    return os;
}

std::uint8_t QOverlapIf::CountLength() const {
    return 1;
}

const QOverlap & QOverlapIf::GetQOverlap() const {
    return qOverlap;
}