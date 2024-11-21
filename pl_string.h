#include <cstddef>
#include <ostream>

#ifndef PLSTRINGH
#define PLSTRINGH

using namespace std;

class pl_string {
private:
    char *_string;
    size_t _size;

    void init();
public:
    pl_string();
    pl_string(pl_string& other);
    pl_string(const char* other);
    pl_string(const char* x1, const char* x2);
    ~pl_string();

    pl_string& operator+=(const char *other);
    pl_string& operator+=(const pl_string& other);

    pl_string operator+(pl_string &x1) const;

    pl_string& operator=(const char *str);
    pl_string& operator=(pl_string &other);

    friend ostream& operator<<(ostream& os, const pl_string& obj);
};

#endif
