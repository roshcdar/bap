#include "../include/MLeveltextdisplay.hpp"

MLeveltextdisplay::MLeveltextdisplay(std::uint8_t value) : Variable("M_LEVELTEXTDISPLAY", value) {}

MLeveltextdisplay::MLeveltextdisplay(const nlohmann::json & j, const std::string & order) : Variable("M_LEVELTEXTDISPLAY", j, order) {}