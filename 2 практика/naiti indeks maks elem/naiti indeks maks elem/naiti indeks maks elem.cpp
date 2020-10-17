#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

    int n, max, str, stl, ** Mas, i, j;
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество строк и столбцов: \n";
    cin >> n;
    Mas = new int* [n];
    for (i = 0; i < n; i++)
        Mas[i] = new int[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            Mas[i][j] = rand() % 50;
            cout << Mas[i][j] << " \t";
        }
        cout << endl;
    }
    max = Mas[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (Mas[i][j] > max)
            {
                max = Mas[i][j];
                str = i + 1;
                stl = j + 1;
            }
        }
    }
    cout << "\n Максимальный элемент: " << max << endl;
    return 0;
}




