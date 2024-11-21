#include <iostream>

#include "paclib.h"

using namespace std;

int main(void)
{
    pl_string str1, theend;

    str1 = "hello";
    str1 += " world\n";

    cout << str1;

    pl_string q1,q2,q3;

    q1 = "a";
    q2 = "b";
    q3 = q1 + q2;

    cout << q1 << "\n";
    cout << q2 << "\n";
    cout << q3 << "\n";

    theend = "I ran and now I am done!\n";

    cout << theend;

    return 0;
}
