#include "../include/NidEngine.hpp"

NidEngine::NidEngine(std::uint32_t value) : Variable("NID_ENGINE", value) {}

NidEngine::NidEngine(const nlohmann::json & j, const std::string & order) : Variable("NID_ENGINE", j, order) {}