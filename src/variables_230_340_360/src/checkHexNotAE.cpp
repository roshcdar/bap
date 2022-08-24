#include "checkHexNotAE.hpp"
#include <string>
#include <sstream>

bool checkHexNotAE(std::uint64_t value) {
    std::stringstream ss;
    std::string res;
    ss << std::hex << value;
    res = ss.str();
    if (res.find_first_not_of("0123456789f") != std::string::npos)
        return false;
    return true;
}