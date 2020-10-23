
#include <iostream>
#include <ctime>
#include <array>
using namespace std;

//
//void GetRandom(int array[50], int n)
//{
//
//	srand(time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		array[i] = rand();
//		cout << array[i] << " ";
//	}
//}
//
//int SummArray(int array[50], int n)
//{
//	if (n > 0)
//	{
//		
//		return array[n-1] + SummArray(array, n-1);
//	}
//	else
//	{
//		return 0;
//	}
//}

int CalcLenght(char array[], int counter)
{
	while (array[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

int Evklid(int m, int n)
{
	int mod;

	mod = m % n;
	if (mod == 0)
	{
		return n;
	}
	else
	{
		return Evklid(n, mod);
	}
}

int main()
{ // 1 - Задание


	/*int array[50];*/


	//int n;
	//cin >> n;


	//GetRandom(array, n);
	//cout << endl;
	//int print = SummArray(array, n);
	//cout << print;

 // 2 - задание
	//char array_lenght[50];
	//cin >> array_lenght;
	//int counter = 0;
	//cout << CalcLenght(array_lenght, counter) << endl;

 // 3 - задание 
	cout << "enter 2 numbers: " << endl;
	int a, b;
	cin >> a >> b;

	int otvet = Evklid(a, b);
	cout << otvet;
}



