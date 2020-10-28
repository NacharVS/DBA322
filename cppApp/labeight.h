#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class labeight
{
	int numb[10];
	srand(static_cast<int>(time(0)));
	for (int i = 0; i < sizeof(numb) / sizeof(numb[0]); i++)
	{
		numb[i] = rand();
		cout << numb[i] << endl;
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
		cout << "a[" << i << "]: address=" << numb + i << "\tvalue=" << *(numb + i) << endl;
	}
	int *max = &numb[0];
	int *min = &numb[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < &numb[i])
			max = &numb[i];
		if (min > &numb[i])
			min = &numb[i];
	}
	cout << "raznost = " << max - min << endl;
	int massachusetts[10];
	srand(static_cast<int>(time(0)));
	for (int i = 0; i < sizeof(massachusetts) / sizeof(massachusetts[0]); i++)
	{
		massachusetts[i] = rand();
		cout << massachusetts[i] << endl;
	}
	int pass;
	cout << "Vvedite parol'";
	cin >> pass;
	int random = rand() % 10;
	for (int i = 0; i < sizeof(massachusetts); i++)
	{
		if (i = random)
		{
			massachusetts[i] = pass;
			break;
		}

	}
	for (int i = 0; i < sizeof(massachusetts) / sizeof(massachusetts[0]); i++)
	{
		cout << massachusetts[i] << endl;
	}
};

