#include "paclib.h"
#include <iostream>

using namespace std;

int main(void)
{
    pl_string str1, thened;

    str1 = "hello";
    str1 += " world\n";

    cout << str1;

    thened = "I ran and now I am done!\n";

    cout << thened;

    return 0;
}
