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
		double x = str.length();
		if (i == x)
		{
			return 0;
		}
		else
		{
			i++;
			return 1 + ColvoSymbol(str,i);
		}
	}
public: static int MaxDivided(int n, int m)
{
	if (n == m)
	{
		return n;
	}
	else
	{
		if (n > m)
		{
			return MaxDivided(n - m, m);
		}
		else
		{
			return MaxDivided(n, m - n);
		}
	}
}

};

