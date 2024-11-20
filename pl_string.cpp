#include <cstring>

#include <iostream>

#include "pl_string.h"
#include "constants.h"

pl_string::pl_string()
{
    debug_fun("x01");

    _size = PL_SMALL;
    _string = new char[_size];
    memset(_string, 0, _size);
}

pl_string::~pl_string()
{
    debug_fun("x02");

    delete[] _string;
    _string = NULL;
    _size = 0;
}

pl_string& pl_string::operator+(const char *other)
{
    debug_fun("x03");

    pl_string *ret = new pl_string();

    *ret = *this + other;

    return *ret;
}

pl_string& pl_string::operator+(const pl_string& other)
{
    debug_fun("x04");

    pl_string *ret = new pl_string();

    *ret = *this;
    ret->operator+=(other);

    return *ret;
}

void pl_string::operator=(const char *str)
{
    debug_fun("x05");

    memcpy(_string, str, strlen(str));
}

ostream& operator<<(ostream& os, const pl_string& obj)
{
    debug_fun("x06");

    os << obj._string;

    return os;
}

pl_string::pl_string(const char*& obj)
{
    debug_fun("x07");

    (*this) = obj;
}

pl_string& pl_string::operator+=(const pl_string& other)
{
    debug_fun("x08");

    memcpy(this->_string + strlen(this->_string), other._string, strlen(other._string));

    return *this;
}

pl_string& pl_string::operator+=(const char *other)
{
    debug_fun("x09");

    memcpy(this->_string + strlen(this->_string), other, strlen(other));

    return *this;
}
