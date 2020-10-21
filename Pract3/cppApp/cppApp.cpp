
#include <iostream>
#include "ArrayGeneration.h"
#include "Pract5.h"
using namespace std;
int main()
{
	ArrayGeneration ag;
	ag.OneDimentionArrayGen();
	ag.OneDimentionArray();
	ag.TwoDimensionArrayGen();
	ag.TwoDimensionArray();
	ag.OneDimensionSort();

	Pract5 pr;
	double mas[]{ 4,32, 423 };
	cout << pr.SummaElementov(mas,2)<<endl;
	cout << pr.ColvoSymbol("i am gay", 0)<<endl;
	cout << pr.MaxDiv(12,6);
}

