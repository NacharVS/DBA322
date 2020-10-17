#include <iostream>
using namespace std;

int main()
{
    int* mas; 
    int size,q;
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество элементов массива: ";
    cin >> size;
    mas = new int[size]; 
    for (int i = 0; i < size; i++) 
    {
        
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    } 
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (mas[j] > mas[j + 1]) {
                
                q = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = q;
            }
        }
    } 
    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
    return 0;
}

