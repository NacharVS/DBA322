// Pract4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Pract4.h"
#include "Math.h"
using namespace std;

void Delenie(double n, double start, double end)
{
    for (double i = start; i <= end; i++)
    {
        cout << i / n<<endl;
    }
}

void Uravnenie(double a, double b, double c) {
    double disc = b * b - 4 * a * c;
    if (disc < 0) {
        cout << "Решений нет!";
    }
    else if (disc == 0) {
        cout << "x1= " << (-b / (2 * a));
    }
    else {
        cout << "x1= " << (-b + sqrt(disc)) / (2 * a)<<endl << "x2= " << (-b - sqrt(disc)) / (2 * a);
    }
    cout << endl;
}
void Pifagor(double a,double b) 
{
    cout<<sqrt(a * a + b * b)<<endl;
}
void U(double I, double R)
{
    cout << I * R<<endl;
}
void R(double U, double I)
{
    if (I > 0) {
        cout << U/I<< endl;
    }
    else 
    {
        cout << "ACHTUNG!!! Tock power = 0";
    }
}
void I(double U, double R)
{
    if (R > 0) 
    {
        cout << U/R << endl;
    }
    else {
        cout << "ACHTUNG!!! Resistance = 0";
    }
    
}
int Fibonachi(int n) 
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Fibonachi(n - 1) + Fibonachi(n - 2);
}
void FibonachiKratnoe(int n) 
{
    for (int i = 0; i <= 50; i++)
    {
        if (Fibonachi(i) % n == 0) {
            cout << Fibonachi(i)<<endl;
        }
    }
}
int main()
{
    Delenie(3, 3, 9);
    Uravnenie(1,1,-2);
    Pifagor(3, 4);
    U(5, 3);
    I(4, 8);
    R(12, 2);
    int x;
    cin >> x;
    FibonachiKratnoe(x);
}


