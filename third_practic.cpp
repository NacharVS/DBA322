

#include <iostream>
using namespace std;

enum Elements
{
	i,
	u,
	r
};

//void UravnenieCalc(double a, double b, double c)
//{
//	if ((b * b - 4 * a * c) >= 0)
//	{
//		double x;
//		x = ((b * -1) + sqrt(b * b - 4 * a * c)) / ((2 * a));
//		cout << "x1: " << x << endl << endl;
//		x = ((b * -1) - sqrt(b * b - 4 * a * c)) / ((2 * a));
//		cout << "x2: " << x;
//	}
//	else
//	{
//		cout << "error";
//	}
//}

void SwitchPhysicalElement(Elements element)
{		int I, U, R;
	switch (element)
	{
	case i:
		
		cout << "input U";
		std::cin >> U;
		cout << "input R";
		std::cin >> R;
		I = U / R;
		cout << "i = u / r" << endl << I;

	case u:
		
		cout << "input I";
		std::cin >> I;
		cout << "input R";
		std::cin >> R;
		U = I * R;
		cout << "u = i * r" << endl << U;
	case r:
	
		cout << "input U";
		std::cin >> U;
		cout << "input I";
		std::cin >> I;
		R = U / I;
		cout << "r = u / i" << endl << R;
	default:
		break;
	};
}

void IntervalCalc(int n, int x, int y)
{
	if (n < x && n < y)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}

int main()
{

	//double a, b, c;
	//cout << "input a: " << endl;
	//cin >> a;
	//cout << "input b: " << endl;
	//cin >> b;
	//cout << "input c: " << endl;
	//cin >> c;

	//UravnenieCalc(a, b, c);


	//cout << endl << endl << "switch physical element: ";
	//SwitchPhysicalElement(i);


	int n, k, x, y, a;
	cout << "number and input x,y" << endl;
	cin >> n;
	cin >> x >> y;
	IntervalCalc(n, x, y);
	
}


