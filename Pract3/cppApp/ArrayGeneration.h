#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class ArrayGeneration
{
public:
	void OneDimentionArrayGen()
	{
		int mas[5];
		srand(static_cast<unsigned int>(time(0)));
		for (int x : mas)
		{
			x = rand() / 10;
			cout << x << "\t";
		}
		cout << endl;
	}
public:
	void OneDimentionArray()
	{
		char mas[]{ '#', '?','@','&' };
		cout << mas << endl;
	}
public:
	void TwoDimensionArrayGen()
	{
		double array[3][3];
		srand(static_cast<unsigned int>(time(0)));
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0; j < 3; j++)
			{
				array[i][j] = rand() / 10;
				cout << array[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
public:
	void TwoDimensionArray()
	{
		string array[2][2]{ {"Fatykhov","Ramil"},{"Snoop","Dog"} };
		int size = sizeof(array) / sizeof(array[0]);
		for (int i = 0;i < size;i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
public:
	void OneDimensionSort()
	{
		int masOne[5];
		int size = sizeof(masOne) / sizeof(masOne[0]);
		srand(static_cast<int>(time(0)));
		for (int i = 0; i < size;i++)
		{
			masOne[i] = rand() % 10;
			cout << masOne[i] << "\t";
		}
		cout << endl;
		int temp = 0;
		bool exit = false;
		while (!exit)
		{
			exit = true;
			for (int i = 0; i < size - 1; i++)
			{
				if (masOne[i] > masOne[i + 1])
				{
					temp = masOne[i];
					masOne[i] = masOne[i + 1];
					masOne[i + 1] = temp;
					exit = false;
				}
			}
		}
		for (int i = 0; i < size;i++)
		{
			cout << masOne[i] << "\t";
		}
		cout << endl;
	}
};


