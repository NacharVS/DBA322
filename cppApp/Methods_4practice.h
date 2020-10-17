#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
class Methods_4practice
{
public:
	static int metod_1(int n, int verhy, int nizhn)
	{
		for (int i = n; i < verhy - nizhn; i++)
		{
			n /= i;
			cout << n;
		}
	}
	static double Korni(int b, int a, int c)
	{
		double d = pow(b, 2) - 4 * a * c;
		double x1 = (-b + sqrt(d)) / 2 * a;
		double x2 = (-b - sqrt(d)) / 2 * a;
		return x1, x2;
	}
	static int Pifagor(int a, int b)
	{
		double c2 = pow(a, 2) + pow(b, 2);
		double c = sqrt(c2);
		return (int)c;
	}
	static int ZakonOma_I(int u, int r)
	{
		int i = u / r;
		return i;
	}
	static int ZakonOma_U(int i, int r)
	{
		int u = i * r;
		return u;
	}
	static int ZakonOma_R(int u, int i)
	{
		int r = u / i;
		return r;
	}
	static int Fibonachi(int n)
	{
		if (n == 0 || n == 1)
			return 1; 
		return Fibonachi(n - 1) + Fibonachi(n-2);		
	}
};

