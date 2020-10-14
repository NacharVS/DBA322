#pragma once
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
class MassiveMethods
{
public:
	static void MassOneAddOne()
	{
		int mas[3];
		srand(static_cast<int>(time(0)));
		for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++)
		{
			mas[i] = rand() % 10;
			cout << mas[i]<< endl;
		}

	}
	static void MassOneAddTwo()
	{
		char mas1[]{ "I " " am " " black " };
		cout << mas1;
	}
	static void MassTwoAddOne()
	{
		int arr[4][4];
		srand(static_cast<int>(time(0)));
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		{
			for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
			{
				arr[i][j] = rand() % 10;
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	static void MassTwoAddTwo()
	{
		char arr1[3][5];
		srand(static_cast<char>(time(0)));
		for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
		{
			for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++)
			{
				arr1[i][j] = rand();
				cout << arr1[i][j] << " ";
			}
			cout << endl;
		}
	}
	static void SortMasOne()
	{
		int numb[10];
		srand(static_cast<int>(time(0)));
		for (int i = 0; i < sizeof(numb) / sizeof(numb[0]); i++)
		{
			numb[i] = rand() % 10;
			cout << numb[i] << " ";
		}

		for (int i = 0; i < sizeof(numb) / sizeof(numb[0]); i++) {
			for (int j = 0; j < sizeof(numb) / sizeof(numb[0]) - 1; j++) {
				if (numb[j] > numb[j + 1])
				{
					int b = numb[j];
					numb[j] = numb[j + 1];
					numb[j + 1] = b;
				}
			}
		}

		for (int i = 0; i < 10; i++)
		{
			cout << numb[i] << " ";
		}
	}
};

