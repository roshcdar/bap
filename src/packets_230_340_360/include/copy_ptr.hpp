#pragma once
#include <memory>

template<typename T>
class copy_ptr {
public:
    template<typename D>
    copy_ptr(std::unique_ptr<D> && d) : pointer(std::move(d)) {}
    copy_ptr() {}
    copy_ptr(std::nullptr_t) {}
    copy_ptr(const copy_ptr<T> & copyPtr) {
        if (copyPtr.pointer)
            pointer = copyPtr.pointer -> Clone();
    }
    copy_ptr<T> & operator= (const copy_ptr<T> & copyPtr) {
        if (this == &copyPtr)
            return *this;
        if (copyPtr.pointer)
            pointer = copyPtr.pointer -> Clone();
        else
            pointer = nullptr;
        return *this;
    }
    friend bool operator==(const copy_ptr<T> & lhs, const copy_ptr<T> & rhs) {
        if (lhs.pointer == rhs.pointer)
            return true;
        return false;
    }
    friend bool operator!=(const copy_ptr<T> & lhs, const copy_ptr<T> & rhs) {
        return !(lhs==rhs);
    }
    T * operator->() const {return pointer.get();}
    T & operator *() const {return *pointer.get();}
private:
    std::unique_ptr<T> pointer;
};
