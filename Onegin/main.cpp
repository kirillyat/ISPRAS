#include <iostream>
#include "Poem.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "rus");


    char a[] = "ab.c.de!fg",
         b[] = "!a!b.c.defg";
    cout << FrontStringCompare(a,b) << endl;


    char a1[] = "abc", b1[] = "abc";
    cout << FrontStringCompare(a1, b1) << endl;
    return 0;
}
