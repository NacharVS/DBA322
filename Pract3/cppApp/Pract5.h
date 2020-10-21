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
//public:
//	static int ColvoSymbol(string str,int i, char ch)
//	{
//		double x = str.length();
//		if (i == x)
//		{
//			return 0;
//		}
//		else
//		{
//			i++;
//			if (str[i] == ch)
//			{
//				return 1 + ColvoSymbol(str, i, ch);
//			}
//		}
//	}
//public: static short ColvoSymbol(string str, char c)
//{
//	int i = 0;
//	i = str.find(c, i);
//	if (i > str.length()) 
//	{ 
//		return 0; 
//	}
//	else
//	{
//		int count = 0;
//		count++;
//		i++;
//		return count + ColvoSymbol(str, c);
//	}
//	
//
//}
public:
	static size_t ColvoSymbol(const string& s, char c)
	{
		string::size_type pos = s.find(c);
		return (pos == string::npos) ? 0 : (1 + ColvoSymbol(s.substr(pos + 1), c));
	}
public:
	static int MaxDivided(int n, int m)
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

