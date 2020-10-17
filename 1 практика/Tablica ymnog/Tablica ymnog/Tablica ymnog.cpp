#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   
    const int size = 10;
    int i = 0, j = 0;

    for (i = 1; i <= size; i++)
    {
        cout << endl
            << setw(7) << i << "   |";
        for (j = 1; j <= size; j++)
            cout << setw(3) << i * j << " ";
    }

    cin.ignore();
    cin.get();
    return 0;
}

