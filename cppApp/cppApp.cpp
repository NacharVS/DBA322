#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MassiveMethods.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "First method to create 1 array";
	cout << endl;
	MassiveMethods::MassOneAddOne();
	cout << endl;
	cout << "Second method to create 1 array ";
	cout << endl;
	MassiveMethods::MassOneAddTwo();
	cout << endl;
	cout << "First method to create 2 array ";
	cout << endl;
	MassiveMethods::MassTwoAddOne();
	cout << endl;
	cout << "Second method to create 2  array ";
	cout << endl;
	MassiveMethods::MassTwoAddTwo();
	cout << endl;
	cout << "Sort array by the bubble method";
	cout << endl;
	MassiveMethods::SortMasOne();

}
 
