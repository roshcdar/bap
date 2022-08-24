#include "../include/TTimeoutrqst.hpp"

TTimeoutrqst::TTimeoutrqst(std::uint16_t value) : Variable("T_TIMEOUTRQST", value) {}

TTimeoutrqst::TTimeoutrqst(const nlohmann::json & j, const std::string & order) : Variable("T_TIMEOUTRQST", j, order) {}