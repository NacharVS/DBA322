#include "Andrey_Gudini_3_praktika.h"

#include <iostream>
using namespace std;





void UravnenieCalc(double a, double b, double c)
{
	if ((b * b - 4 * a * c) >= 0)
	{
		double x;
		x = ((b * -1) + sqrt(b * b - 4 * a * c)) / ((2 * a));
		cout << "x1: " << x << endl << endl;
		x = ((b * -1) - sqrt(b * b - 4 * a * c)) / ((2 * a));
		cout << "x2: " << x;
	}
	else
	{
		cout << "error";
	}
}
void Interval(double a, double b, double c)
{
	if (c >= a && c <= b)
	{	
		cout << "Попадание";

	}
	else
	{
		cout << "Не попал";
	}
}

void SwitchPhysicalElement(Elements element)
 {

	switch (element)
	{
	case 1:
		int I, U, R;
		cout << "input U";
		cin >> U;
		cout << "input R";
		cin >> R;
		I = U / R;
		cout << "i = u / r" << endl << I;

	case 2:
		int I, U, R;
		cout << "input I";
		cin >> I;
		cout << "input R";
		cin >> R;
		U = I * R;
		cout << "u = i * r" << endl << U;
	case 3:
		int I, U, R;
		cout << "input U";
		cin >> U;
		cout << "input I";
		cin >> I;
		R = U / I;
		cout << "r = u / i" << endl << R;
		default:
		break;
	}
	
}
enum Elements
	{
		i,
		u,
		r
	};
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
void Fibanachi(int x)
{

	
	while (i < x)
	{
		if (x % i == 0)
		{
			cout << i + " ";
		}
		else
		{
			cout << "";
		}
		
	}
}
int main()
{
	double a2, b2, c2;
	double a, b, c;
	cout << "input a: " << endl;
	cin >> a;
	cout << "input b: " << endl;
	cin >> b;
	cout << "input c: " << endl;
	cin >> c;

	UravnenieCalc(a, b, c);
	cout << "Введите промежуток [a,b] и точку [c]";
		cout << "a = ";
		cin >> a2;
		cout << "b = ";
		cin >> b2;
		cout << "c = ";
		cin >> c2;
		Interval(a2, b2, c2);


	cout << endl << endl << "switch physical element: i-1 or u-2 or r-3";
	SwitchPhysicalElement(i);


}
﻿

