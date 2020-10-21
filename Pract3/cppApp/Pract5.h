#pragma once
using namespace std;
#include <string>
class Pract5
{

public:
	static double SummaElementov(double mas[], int i) 
	{
		if(i < 0) 
		{
			return 0;
		}
		else 
		{
			return mas[i] + SummaElementov(mas, i-1);
		}
	}
public:
	static int ColvoSymbol(string str, int i)
	{
		if (i == str[sizeof(str)/sizeof(str[0])])
		{
			return 0;
		}
		else
		{
			i++;
			return i + ColvoSymbol(str,i);
		}
	}
public: static int MaxDiv(int n, int m)
{
	if (n == m)
	{
		return n;
	}
	else
	{
		if (n > m)
		{
			return MaxDiv(n - m, m);
		}
		else
		{
			return MaxDiv(n, m - n);
		}
	}
}

};

