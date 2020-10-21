#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include "labasix.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	setlocale(LC_ALL, "rus");
	const int size = 10;
	int arr[size] = { 1,4,8,2,4,1,3,7,8,4 };
	for (int i = 0; i < size; ++i)
		std::cout << " ";
	std::cout << labsix::foo(arr, arr + size) << std::endl;
	//--------------------------------------------------------------------------—
	const char* str = "asdasdqwdqd";
	char a = 'd';
	cout << labsix::ColvoSymbol(str, a);
	//--------------------------------------------------------------------------—
	cout << endl;
	int a1 = 40;
	int b1 = 8;
	labsix::NOD(a1, b1);
}
 
