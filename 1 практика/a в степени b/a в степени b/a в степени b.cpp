#include <iostream>

int main()
{
    int a, b, w=1;
    std::cout << "Vvedite chislo: \n";
    std::cin >> b;
    std::cout << "Vvedite stepen: \n";
    std::cin >> a;
    int q = b;
    if (a == 0) { std:: cout << w; return 0; }
    for (int i = 1; i < a; i++)
    {
        b *= q;
    }
    std::cout << "Otvet: \n"; 
    std::cout << b;
}

