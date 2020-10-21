
#include <iostream>
#include <ctime>
#include <array>
using namespace std;


void GetRandom(int array[50], int n)
{

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i] = rand();
		cout << array[i] << " ";
	}
}

int SummArray(int array[50], int n)
{
	if (n > 0)
	{
		
		return array[n-1] + SummArray(array, n-1);
	}
	else
	{
		return 0;
	}
}

int Count(char c, string s)
{
	
	if (0 == s.length()) //пройтись по всей строке false(default)
		return 0;
	else
	{
		if (c == s[i]) // если символ найден
			return Count(c, s, 0 + 1) + 1; // length++;
		else
			return Count(c, s, 0 + 1); // countinue
	}
}

int main()
{ // 1 - Задание
	//int n;
	//cin >> n;
	//int array[50];

	//GetRandom(array, n);
	//cout << endl;
	//int print = SummArray(array, n);
	//cout << print;

 // 2 - задание

	string s;
	char c;	
	
	cin >> c;
	cin >> s;
	Count(c, s);


}



