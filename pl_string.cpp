#include <cstring>

#include "pl_string.h"
#include "constants.h"

void pl_string::init()
{
    debug_fun("x01");

    _size = PL_SMALL;
    _string = new char[_size];
    memset(_string, 0, _size);
}

pl_string::pl_string()
{
    debug_fun("x10");

    init();
}

pl_string::pl_string(pl_string& other)
{
    debug_fun("x07");

    init();
    memcpy(this->_string, other._string, strlen(other._string));
}

pl_string::pl_string(const char* other)
{
    debug_fun("x11");

    init();
    memcpy(_string, other, strlen(other));
}

pl_string::pl_string(const char* x1, const char* x2)
{

}

pl_string::~pl_string()
{
    debug_fun("x12");

    delete[] _string;
    _string = NULL;
    _size = 0;
}

pl_string& pl_string::operator=(const char *str)
{
    debug_fun("x05");

    memcpy(_string, str, strlen(str));

    return *this;
}

pl_string& pl_string::operator=(pl_string &other)
{
    debug_fun("x05b");

    memcpy(_string, other._string, strlen(other._string));

    return *this;
}

ostream& operator<<(ostream& os, const pl_string& obj)
{
    debug_fun("x06");

    os << obj._string;

    return os;
}

pl_string pl_string::operator+(pl_string &x1) const
{
    return pl_string(this->_string, x1._string);
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
