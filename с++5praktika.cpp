
#include <iostream>
using namespace std;
int main()
{
	int a=10, b=15, c;
	int* rasstoyanie_A = &a, * rasstoyanie_B = &b;
	cout << "a=" << a << "\t&a = " << &a << "\t*rasstoyanie_A = " << *rasstoyanie_A << endl;
	cout << "b=" << b << "\t&b = " << &b << "\t*rasstoyanie_B = " << *rasstoyanie_B << endl;
	cout << "&a: " << &a << "\n&b: " << &b << "\n&a - &b: " << ((int*)&a - (int*)&b) << endl;
}
 
