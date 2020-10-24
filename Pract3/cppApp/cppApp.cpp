
#include <iostream>
#include "ArrayGeneration.h"
#include "Pract5.h"
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int n = 5;
	string g = "Freddie Mercury";
	string h = "David Bowie";
	int j = 1488;
	double m = 10;
	int* x1 = &n;
	double* x2 = &m;
	int len = abs(((int)x1 - (int)x2) / 8);
	cout << (int)x1 << endl;
	cout << (int)x2 << endl;
	cout << len;
}

