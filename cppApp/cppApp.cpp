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
	/*cout << "�������� ����������� ������� 1-� �������� ";
	cout << endl;
	ArrayGeneration::ArrOneDim1try();
	cout << endl;
	cout << "�������� ����������� ������� 2-� �������� ";
	cout << endl;
	ArrayGeneration::ArrOneDim2try();
	cout << endl;
	cout << "�������� ���������� ������� 1-� �������� ";
	cout << endl;
	ArrayGeneration::ArrTwoDim1try();
	cout << endl;
	cout << "�������� ���������� ������� 2-� �������� ";
	cout << endl;
	ArrayGeneration::ArrTwoDim2try();
	cout << endl;
	cout << "���������� ������� ������� ��������";
	cout << endl;
	ArrayGeneration::SortMas();*/

}

