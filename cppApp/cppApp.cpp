#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ArrayGeneration.h"
#include "Methods_4practice.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	for (int count = 0; count < 50; ++count)
		if ((Methods_4practice::Fibonachi(count) % a) == 0)
		{
			cout << Methods_4practice::Fibonachi(count) << " ";
		}

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

