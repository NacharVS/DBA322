
#include <iostream>
#include "ArrayGeneration.h"
#include "Pract4.h"
using namespace std;
int main()
{
    Pract4 pr;
    Pract4::Delenie(3, 3, 9);
    Pract4::Uravnenie(1, 1, -2);
    Pract4::Pifagor(3, 4);
    Pract4::U(5, 3);
    Pract4::I(4, 8);
    Pract4::R(12, 2);
    int x;
    cout << "Enter n: ";
    cin >> x;
    Pract4::FibonachiKratnoe(x);
}

