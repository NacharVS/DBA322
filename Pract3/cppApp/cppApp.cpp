
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
	cout << pr.ColvoSymbol("Ramil", 0)<<endl;
	cout << pr.MaxDivided(12,6);
}

