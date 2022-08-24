#include "../include/QTrackdel.hpp"

QTrackdel::QTrackdel(std::uint8_t value) : Variable("Q_TRACKDEL", value) {}

QTrackdel::QTrackdel(const nlohmann::json & j, const std::string & order) : Variable("Q_TRACKDEL", j, order) {}