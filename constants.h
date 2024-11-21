#include<iostream>
#include <vector>

using namespace std;

#ifndef CONSTANTSH
#define CONSTANTSH



#define DEBUG true
#define PL_SMALL 1024

void debug_fun(const char *message)
{
#ifdef DEBUG
    cout << message << "\n" << flush;
#endif
}

void debug_fun(pl_string &message)
{
    cout << message << "\n" << flush;
}

#endif
