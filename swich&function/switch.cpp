#include <iostream>

using namespace std;

int main()
{
    char i = '2';

    cout << endl;

    switch (i)
    {

    case 1:
        cout << "one" << endl;
        break;
    case '2':
        cout << "two char" << endl;
        break;
    default:
        cout << "default Case" << endl;
    }

    cout << endl;
}