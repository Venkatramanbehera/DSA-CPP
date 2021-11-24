#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a Charecter" << endl;

    cin >> ch;

    if (int(ch) >= 97 && int(ch) <= 125)
    {
        cout << "This is lowercase" << endl;
    }
    else if (int(ch) >= 65 && int(ch) <= 90)
    {
        cout << "This is uppercase" << endl;
    }
    else if (int(ch) >= 48 && int(ch) <= 57)
    {
        cout << "Numeric" << endl;
    }
    else
    {
        cout << "None" << endl;
    }
}