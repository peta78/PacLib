#include <cstring>

#include "pl_string.h"

pl_string::pl_string()
{
    _size = 1024;
    _curSize = 0;
    _string = new char[_size];
    memset(_string, 0, _size);
}

pl_string::~pl_string()
{
    delete[] _string;
    _string = NULL;
    _size = 0;
    _curSize = 0;
}

pl_string& pl_string::operator+(const char *other)
{
    return *this;
}

pl_string& pl_string::operator+(const pl_string& other)
{
    memcpy(this->_string + this->_size, other._string, other._size);
    _size += other._size;

    return *this;
}

void pl_string::operator=(const char *str)
{
    _curSize = strlen(str);
    memcpy(_string, str, _curSize);
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
    return *this;
}
