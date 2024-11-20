#include <cstddef>
#include <ostream>

#ifndef PLSTRINGH
#define PLSTRINGH

using namespace std;

class pl_string {
private:
    char *_string;
    size_t _size;
public:
    pl_string();
    pl_string(const char*&);
    ~pl_string();

    void operator=(const char *str);
    pl_string& operator+(const pl_string& other);
    pl_string& operator+(const char *other);
    pl_string& operator+=(const char *other);
    pl_string& operator+=(const pl_string& other);
    friend ostream& operator<<(ostream& os, const pl_string& obj);
};

#endif
