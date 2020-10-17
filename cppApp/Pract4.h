#pragma once
#include <iostream>
using namespace std;
class Pract4
{

public:
	static void Delenie(double n, double start, double end)
	{
		for (double i = start; i <= end; i++)
		{
			cout << i / n << endl;
		}
	}
public:
	static void Uravnenie(double a, double b, double c) {
		double disc = b * b - 4 * a * c;
		if (disc < 0) {
			cout << "No solutions found!";
		}
		else if (disc == 0) {
			cout << "x1= " << (-b / (2 * a));
		}
		else {
			cout << "x1= " << (-b + sqrt(disc)) / (2 * a) << endl << "x2= " << (-b - sqrt(disc)) / (2 * a);
		}
		cout << endl;
	}
public:
	static   void Pifagor(double a, double b)
	{
		cout << sqrt(a * a + b * b) << endl;
	}
public:
	static  void U(double I, double R)
	{
		cout << I * R << endl;
	}
public:
	static void R(double U, double I)
	{
		if (I > 0) {
			cout << U / I << endl;
		}
		else
		{
			cout << "ACHTUNG!!! Tock power = 0";
		}
	}
public:
	static   void I(double U, double R)
	{
		if (R > 0)
		{
			cout << U / R << endl;
		}
		else {
			cout << "ACHTUNG!!! Resistance = 0";
		}

	}
public:
	static int Fibonachi(int n)
	{
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		return Fibonachi(n - 1) + Fibonachi(n - 2);
	}
public:
	static void FibonachiKratnoe(int n)
	{
		for (int i = 0; i <= 50; i++)
		{
			if (Fibonachi(i) % n == 0) {
				cout << Fibonachi(i) << endl;
			}
		}
	}
};

