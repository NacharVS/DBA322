
#include <iostream>
#include <ctime>
#include <array>
using namespace std;

void diagonalSum(int array_array[50][50], int n_n)
{
	int diag_sum = 0;
	for (int i = 0; i < n_n; ++i)
	{
		for (int j = 0; j < n_n; ++j)
		{
			if (i == j)
			{
				diag_sum += array_array[i][j];
			}
		}
	}
	cout << "summ diagonal: " << diag_sum;
}

void GetRandom(int array[50],int n)
{
	
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i] = rand();
		cout << array[i] << " ";
	}
	
}

void BubbleSorted(int array[50],int n)
{
	int temp;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < (n - i); ++j)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			
		}
	}
	for (int j = 0; j < n; ++j)
	{
		cout << array[j] << " ";
	}
}

void GetRandomMultidemensional(int array_array[50][50], int n_n)
{
	for (int i = 0; i < n_n; i++)
	{
		for (int j = 0; j < n_n; j++)
		{
			array_array[i][j] = rand();
			cout << array_array[i][j] << "\t";
		}
		cout << endl;
	}

}
void MaxIndexMultiedemnsional(int array_array[50][50], int n_n)
{
	int max;
	max = array_array[0][0];
	for (int i = 0; i < n_n; i++)
	{
		for (int j = 0; j < n_n; j++)
		{
			if (array_array[i][j] > max)
			{
				max = array_array[i][j];
				int str = i + 1;
				int stl = j + 1;
				cout << "Max: " << max << "located in " << str << stl;
			}
		}
	}
	/*for (int i = 0; i < n_n; i++)
	{
		for (int j = 0; j < n_n; j++)
		{
			cout << array_array[i][j];
		}
	}*/
}
 
int main()
{ // 1 - задание
	/*cout << "Enter the size of array: " << endl << endl;
	int array[50];	
	int n;
	cin >> n;
	cout << endl;
	GetRandom(array, n);

	cout << endl << endl;
	cout << "sorted:" << endl << endl;
	
	BubbleSorted(array,n);*/

// 2 - задание
	cout << "Enter the size of multidemensional array: " << endl << endl;
	int array_array[50][50];
	int n_n;
	cin >> n_n;
	cout << endl;
	GetRandomMultidemensional(array_array,n_n);
	//cout << endl << endl << "sorted" << endl << endl;
	//MaxIndexMultiedemnsional(array_array, n_n);

// 3 - задание 
	cout << endl << endl;
	diagonalSum(array_array, n_n);

}
