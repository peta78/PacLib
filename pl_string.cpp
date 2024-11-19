#include <cstring>

#include "pl_string.h"

pl_string::pl_string()
{
    _size = 1024;
    _curSize = 0;
    _string = new char[_size];
}

pl_string::~pl_string()
{
    delete[] _string;
    _string = NULL;
    _size = 0;
    _curSize = 0;
}

void pl_string::operator=(const char *str)
{
    _curSize = strlen(str);
    memcpy(_string, str, _curSize);
}

// ostream& pl_string::operator<<(ostream& os, const pl_string& obj)
// {
//     os << obj._string;
//     return os;
// }
//
// void pl_string::operator+(const char *str)
// {
//     memcpy(_string + _curSize, str, strlen(str));
//     _curSize += strlen(str);
// }
//
// pl_string& pl_string::operator+=(const char *other)
// {
//     _string = *this + other;
//     return *this;
// }
