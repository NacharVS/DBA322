#include <iostream>
 using namespace std;
int main()
{
   
    int n, ** Mas, i, j,sum(0);
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
    for (i = 0; i < n; ++i)
        sum += Mas[i][i];
    cout << "Cумма: " << sum << endl;

}

