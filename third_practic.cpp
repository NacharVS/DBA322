

#include <iostream>
using namespace std;

enum Elements
{
	i,
	u,
	r
};

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


	cout << endl << endl << "switch physical element: ";
	SwitchPhysicalElement(i);
}

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
{
	switch (element)
	{
	case i:
		int I, U, R;
		cout << "input U";
		cin >> U;
		cout << "input R";
		cin >> R;
		I = U / R;
		cout << "i = u / r" << endl << I;

	case u:
		int I, U, R;
		cout << "input I";
		cin >> I;
		cout << "input R";
		cin >> R;
		U = I * R;
		cout << "u = i * r" << endl << U;
	case r:
		int I, U, R;
		cout << "input U";
		cin >> U;
		cout << "input I";
		cin >> I;
		R = U / I;
		cout << "r = u / i" << endl << R;
	default:
		break;
	}
}


