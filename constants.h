#ifndef CONSTANTSH
#define CONSTANTSH

#define DEBUG true
#define PL_SMALL 1024

void debug_fun(const char *message)
{
#ifdef DEBUG
    cout << message << "\n";
#endif
}

#endif
