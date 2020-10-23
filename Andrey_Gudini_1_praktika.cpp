#include "Andrey_Gudini_1_praktika.h"

#include <iostream>
#include <ctime>
#include <array>

using namespace std;

int main()
{
    int mas[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mas[i][j] = rand();
            cout << mas[i][j] << +" ";
        }
        cout << "\n";
    }
    int summ = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                summ += mas[i][j];

        }
    }
    cout << "Сумма диагонали =" << summ << +"\n";

    int maxI = 0;
    int maxJ = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mas[i][j] > mas[maxI][maxJ])
            {
                maxI = i;
                maxJ = j;
            }
        }
    }
    cout << "\nИндекс макс.значения в матрице\n";
    cout << maxI; cout << maxJ;


    int mas3[6]{ 144,100,112,911,345,321 };
    cout << "\nНеотсортированный массив\n";
    for (int i = 0; i < 6; i++)
    {
        cout << mas3[i] << +" ";
    }
    cout << "\n";
    int temp = 0;
    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (mas3[j] > mas3[j + 1]) {
                // меняем элементы местами
                temp = mas3[j];
                mas3[j] = mas3[j + 1];
                mas3[j + 1] = temp;
            }
        }
    }
    cout << "\nОтсортированный массив\n";
    for (int i = 0; i < 6; i++)
    {
        cout << mas3[i] << " ";
    }
}
   
    




