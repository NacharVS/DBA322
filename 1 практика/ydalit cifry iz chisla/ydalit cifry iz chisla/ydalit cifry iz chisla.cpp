
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int number, digit;
    string str;
    stringstream s;
    cout << "Vvedite chislo: \n";
    cin >> number;
    cout << "Ydalite chislo: \n";
    cin >> digit;
    s << number;
    str = s.str();
    s.str("");
    str.erase(str.find(digit + '0', 0), 1);
    s << str;
    s >> number;
    cout << "Otvet: ";
    cout << number;

    system("pause");
    return 0;
}
