#pragma once
#include <exception>

class NotVariableException: public std::exception {
public:
    [[nodiscard]] const char * what() const noexcept override;
};



