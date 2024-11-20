#include <cstring>

#include <iostream>

#include "pl_string.h"
#include "constants.h"

pl_string::pl_string()
{
    #ifdef DEBUG
    cout << "x01\n";
    #endif

    _size = PL_SMALL;
    _string = new char[_size];
    memset(_string, 0, _size);
}

pl_string::~pl_string()
{
    #ifdef DEBUG
    cout << "x02\n";
    #endif

    delete[] _string;
    _string = NULL;
    _size = 0;
}

pl_string& pl_string::operator+(const char *other)
{
    #ifdef DEBUG
    cout << "x03\n";
    #endif

    pl_string *ret = new pl_string();

    *ret = *this + other;

    return *ret;
}

pl_string& pl_string::operator+(const pl_string& other)
{
    #ifdef DEBUG
    cout << "x04\n";
    #endif

    pl_string *ret = new pl_string();

    *ret = *this;
    ret->operator+=(other);

    return *ret;
}

void pl_string::operator=(const char *str)
{
    #ifdef DEBUG
    cout << "x05\n";
    #endif

    memcpy(_string, str, strlen(str));
}

ostream& operator<<(ostream& os, const pl_string& obj)
{
    #ifdef DEBUG
    cout << "x06\n";
    #endif

    os << obj._string;

    return os;
}

pl_string::pl_string(const char*& obj)
{
    #ifdef DEBUG
    cout << "x07\n";
    #endif

    (*this) = obj;
}

pl_string& pl_string::operator+=(const pl_string& other)
{
    #ifdef DEBUG
    cout << "x08\n";
    #endif

    memcpy(this->_string + strlen(this->_string), other._string, strlen(other._string));

    return *this;
}

pl_string& pl_string::operator+=(const char *other)
{
    #ifdef DEBUG
    cout << "x09\n";
    #endif

    memcpy(this->_string + strlen(this->_string), other, strlen(other));

    return *this;
}
