#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
class labafour
{
public:
	static  int metod_1(int n, int verhy, int nizhn)
	{
		for (int i = n; i < verhy - nizhn; i++)
		{
			n / i;
			cout << n;
		}
	}
	static int metod_2(int b, int a, int c)
	{
		int d = (pow(b, 2) - 4 * a * c);
		double x1 = (-b + sqrt(d)) / 2 * a;
		double x2 = (-b - sqrt(d)) / 2 * a;
		return x1, x2;
	}
	static int metod_3(int a, int b)
	{
		int c2 = pow(a, 2) + pow(b, 2);
		int c = sqrt(c2);
		return c;
	}
	static int metod_4_I(int u, int r)
	{
		int i = u / r;
		return i;
	}
	static int metod_4_U(int i, int r)
	{
		int u = i * r;
		return u;
	}
	static int metod_4_R(int u, int i)
	{
		int r = u / i;
		return r;
	}
	static int metod_5(int n)
	{
		if (n == 0)
			return 0; 
		if (n == 1)
			return 1; 
		labafour::metod_5(n - 1) + labafour::metod_5(n - 2);
	}
};

