#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int hundred = 0, fifty = 0, twenty = 0, ten = 0, one = 0;

    switch (1)
    {
    case 1:
        cout << "100 rupees" << n / 100 << endl;
        n = n % 100;
    case 2:
        cout << "50 rupees" << n / 50 << endl;
        n = n % 50;
    case 3:
        cout << "20 rupees" << n / 20 << endl;
        n = n % 20;
    case 4:
        cout << "10 rupees" << n / 10 << endl;
        n = n % 10;
        if (n == 0)
        {
            break;
        }
    default:
        cout << "1 rupee" << n / 1 << endl;
    }
}