#include <cstring>

#include "pl_string.h"

pl_string::pl_string()
{
    _size = 1024;
    _string = new char[_size];
    memset(_string, 0, _size);
}

pl_string::~pl_string()
{
    delete[] _string;
    _string = NULL;
    _size = 0;
}

pl_string& pl_string::operator+(const char *other)
{
    memcpy(this->_string + strlen(this->_string), other, strlen(other));

    return *this;
}

pl_string& pl_string::operator+(const pl_string& other)
{
    memcpy(this->_string + strlen(this->_string), other._string, strlen(other._string));

    return *this;
}

void pl_string::operator=(const char *str)
{
    memcpy(_string, str, strlen(str));
}

ostream& operator<<(ostream& os, const pl_string& obj)
{
    os << obj._string;

    return os;
}

pl_string::pl_string(const char*& obj)
{
    (*this) = obj;
}

pl_string& pl_string::operator+=(const char *other)
{
    *this = *this + other;

    return *this;
}
