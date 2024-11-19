#include <cstddef>
#include <ostream>

#ifndef PLSTRING
#define PLSTRING

using namespace std;

class pl_string {
private:
    char *_string;
    size_t _size, _curSize;
public:
    pl_string();
    pl_string(const char*&);
    ~pl_string();

    void operator=(const char *str);
    pl_string& operator+(const pl_string& other);
    pl_string& operator+(const char *other);
    pl_string& operator+=(const char *other);
    friend ostream& operator<<(ostream& os, const pl_string& obj);
};

#endif
