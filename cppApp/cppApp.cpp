#include <iostream>
#include <cstdlib>
#include <ctime>
#include "labafour.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	//������ �����
	labafour::metod_1(6, 15, 34);
	//���������� ���������
	labafour::metod_2(4, 5, 6);
	//������� ����������
	labafour::metod_3(32, 43);
	//����� ���
	labafour::metod_4_I(5, 6);
	labafour::metod_4_R(54, 23);
	labafour::metod_4_U(43, 234);
	//���������
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
 
