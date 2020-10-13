#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main()
{
     int numbers[5] = {1, 2, 3, 4, 5};
    int twoDimN[5][5];
    srand(static_cast<int>(time(0)));
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {
        for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++)
        {
            twoDimN[i][j] = rand();
            cout << twoDimN[i][j] << " ";
        }
        cout << endl;
    }
    

 
}
 
