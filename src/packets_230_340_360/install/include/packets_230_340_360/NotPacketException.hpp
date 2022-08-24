#pragma once
#include <exception>

class NotPacketException: public std::exception {
public:
    [[nodiscard]] const char * what() const noexcept override;
};
