#include <iostream>
#include <cstdlib>
#include <ctime>
#include "labafour.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	//ѕервый метод
	labafour::metod_1(6, 15, 34);
	// вадратное уравнение
	labafour::metod_2(4, 5, 6);
	// вадрат гипотенузы
	labafour::metod_3(32, 43);
	//закон ома
	labafour::metod_4_I(5, 6);
	labafour::metod_4_R(54, 23);
	labafour::metod_4_U(43, 234);
	//‘ибаначчи
	labafour::metod_5(35);
	int n1;
	cin >> n1 ;
	for (int count = 0; count < 35; ++count)
	{
		if ((labafour::metod_5(count) % n1)== 0)
		{
		    cout << labafour::metod_5(count) << " ";
		}
		
	}
		
}
 
