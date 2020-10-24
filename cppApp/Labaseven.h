#pragma once
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
class Labaseven
{
    int n = 5;
    string g = "Freddie Mercury";
    string h = "Horny Molly";
    int j = 1488;
    int m = 10;
    int* x1 = &n;
    int* x2 = &m;
    int len = abs(((int)x1 - (int)x2) / 8);
    cout << (int)x1 << endl;
    cout << (int)x2 << endl;
    cout << len;
};

