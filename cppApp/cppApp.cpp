#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include "ArrayGeneration.h"
#include "Methods_4practice.h"
#include "Methods_Rekyrsiya.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "rus");
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
	Methods_Rekyrsiya::NaibODel(a1, b1);






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

