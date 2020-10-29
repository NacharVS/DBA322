
#include <iostream>
#include "ArrayGeneration.h"
#include "Pract5.h"
#include <stdio.h>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	int mas[]{ 123,45,92,11,0,-5 };
	int temp;
	for (int i = 0; i < size(mas) - 1; i++)
	{
		for (int j = 0; j < size(mas) - i - 1; j++)
		{
			if (mas[j] > mas[j + 1]) 
			{
				temp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < size(mas);i++)
	{
		cout << "address=" << mas + i << "\tvalue=" << *(mas + i) << endl;
	}

	string x;
	cout << "Enter your pin-code"<<endl;
	int arr[6];
	for (int i = 0; i < 5; i++)
	{
		if (i >=size(arr))
		{
			arr[i] = NULL;
			arr[i+1] = NULL;
			break;
		}
		else 
		{
			cin >> arr[i];
		}
	}
	for (int i = 0;i < size(arr);i++)
	{
		if (arr[i] != NULL)
		{
			cout << "address=" << arr + i << "\tvalue=" << *(arr + i) << endl;
		}
	}
}

