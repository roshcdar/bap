#include "../include/QNvinhsmicperm.hpp"

QNvinhsmicperm::QNvinhsmicperm(std::uint8_t value) : Variable("Q_NVINHSMICPERM", value) {}

QNvinhsmicperm::QNvinhsmicperm(const nlohmann::json & j, const std::string & order) : Variable("Q_NVINHSMICPERM", j, order) {}