#include "checkHexF.hpp"
#include <string>
#include <sstream>

bool checkHexF(std::uint64_t value) {
    std::stringstream ss;
    std::string res;
    ss << std::hex << value;
    res = ss.str();
    std::size_t pos;
    if ((pos = res.find_first_of("f")) != std::string::npos) {
        if (res.find_first_not_of("f", pos+1) != std::string::npos)
            return false;
    }
    return true;
}