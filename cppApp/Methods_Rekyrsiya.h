#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
class Methods_Rekyrsiya
{
public:
	static int SumEl(int* arr, const int* end) {
		if (arr == end) return 0;
		return (*arr) + SumEl(arr + 1, end);
	}
	static size_t ColvoSymbol(const string& s, char c)
	{
		string::size_type pos = s.find(c);
		return (pos == string::npos) ? 0 : (1 + ColvoSymbol(s.substr(pos + 1), c));
	}
	static int NaibODel(int a, int b)
	{
		while (a != 0 && b != 0)
			if (a > b)
			{
				a %= b;
			}
			else
			{
				b %= a;
			}
		cout<<(a + b);
		return a + b;
	}
};
