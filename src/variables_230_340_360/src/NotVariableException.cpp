#include "../include/NotVariableException.hpp"

const char * NotVariableException::what() const noexcept {
    return "NotVariableException: can't set value to the variable.";
}
