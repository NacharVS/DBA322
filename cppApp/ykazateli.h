#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
class ykazateli
{
public:
	static void rast(int n, int m)
	{
		int* x1 = &n;
		int* x2 = &m;
		int len = abs(((int)x1 - (int)x2) / 8);
		cout << (int)x1 << endl;
		cout << (int)x2 << endl;
		cout << len;

		
	}



};

