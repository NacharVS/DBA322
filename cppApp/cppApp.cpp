#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include "ArrayGeneration.h"
#include "Methods_4practice.h"
#include "Methods_Rekyrsiya.h"
#include "ykazateli.h"
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "rus");
	/*Praktika Ykazateli mass*/
	int mass[10];
	srand(static_cast<int>(time(0)));
	for (int i = 0; i < sizeof(mass) / sizeof(mass[0]); i++)
	{
		mass[i] = rand();
		cout << mass[i] << endl;
	}

	for (int i = 0; i < sizeof(mass) / sizeof(mass[0]); i++) {
		for (int j = 0; j < sizeof(mass) / sizeof(mass[0]) - 1; j++) {
			if (mass[j] > mass[j + 1])
			{
				int b = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = b;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]: address=" << mass + i << "\tvalue=" << *(mass + i) << endl;
	}
	int* max = &mass[0];
	int* min = &mass[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < &mass[i])
			max = &mass[i];
		if (min > & mass[i])
			min = &mass[i];
	}
	cout << "raznost = " << max - min << endl;

	int masss2[10];
	srand(static_cast<int>(time(0)));
	for (int i = 0; i < sizeof(masss2) / sizeof(masss2[0]); i++)
	{
		masss2[i] = rand();
		cout << masss2[i] << endl;
	}
	int pass;
	cout << "Vvedite parol'";
	cin >> pass;
	int random = rand() % 10;
	for (int i = 0; i < sizeof(masss2); i++)
	{
		if (i = random)
		{
			masss2[i] = pass;
			break;
		}

	}
	for (int i = 0; i < sizeof(masss2) / sizeof(masss2[0]); i++)
	{
		cout << masss2[i] << endl;
	}

	//-----------------------------------------------------------------------------------------------------------
	/*ykazateli::rast(10, 5);
	cout<<endl;
	int n = 10;
	int m = 5;
	int* x1 = &n;
	int* x2 = &m;
	int len = abs(((int)x1 - (int)x2) / 8);
	cout << (int)x1 << endl;
	cout << (int)x2 << endl;
	cout << len;
	cout << endl;
	int a = 100, b = 5;
	std::cout << "&a: " << &a << "\n&b: " << &b << "\n&a - &b: " << ((char*)&a - (char*)&b) << std::endl;
	*/




	//-----------------------------------------------------------------------------------------------------------
	/*setlocale(LC_ALL, "rus");
	const int size = 10;
	int arr[size] = { 1,4,8,2,4,1,3,7,8,4 };
	for (int i = 0; i < size; ++i)
		std::cout << " ";
	std::cout << Methods_Rekyrsiya::SumEl(arr, arr + size) << std::endl;

	const char* str = "asdasdqwdqd";
	char a = 'd';
	cout << Methods_Rekyrsiya::ColvoSymbol(str, a);

	cout <<endl;
	int a1 = 40;
	int b1 = 8;
	Methods_Rekyrsiya::NaibODel(a1, b1);*/






	//-----------------------------------------------------------------------------------------------------------
	/*setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	for (int count = 0; count < 50; ++count)
		if ((Methods_4practice::Fibonachi(count) % a) == 0)
		{
			cout << Methods_4practice::Fibonachi(count) << " ";
		}*/

		//-----------------------------------------------------------------------------------------------------------
		/*cout << "Создания одномерного массива 1-м способом ";
		cout << endl;
		ArrayGeneration::ArrOneDim1try();
		cout << endl;
		cout << "Создания одномерного массива 2-м способом ";
		cout << endl;
		ArrayGeneration::ArrOneDim2try();
		cout << endl;
		cout << "Создания двумерного массива 1-м способом ";
		cout << endl;
		ArrayGeneration::ArrTwoDim1try();
		cout << endl;
		cout << "Создания двумерного массива 2-м способом ";
		cout << endl;
		ArrayGeneration::ArrTwoDim2try();
		cout << endl;
		cout << "Сортировка массива методом пузырька";
		cout << endl;
		ArrayGeneration::SortMas();*/

}

