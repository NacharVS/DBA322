#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include "labasix.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int z = 10;
    int x = 43;
    int c = 12;
    int v = 54;
    int b = 767;
    int* x1 = &z;
    int* x2 = &b;
    int len = abs(((int)x1 - (int)x2) / 8);
    cout << (int)x1 << endl;
    cout << (int)x2 << endl;
    cout << len;
}
 
