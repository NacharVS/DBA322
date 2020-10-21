
#include <iostream>
#include "ArrayGeneration.h"
#include "Pract5.h"
#include <string>
using namespace std;
int main()
{
	Pract5 pr;
	double mas[]{ 4,32, 64 };
	cout << pr.SummaElementov(mas,2)<<endl;
	char a;
	cin >> a;
	cout << pr.ColvoSymbol("Ramil Fatykhov", a)<<endl;
	cout << pr.MaxDivided(12,6);
}

