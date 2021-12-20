#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a)
    {
        if (a & 1)
        {
            count += 1;
        }
        a = a >> 1;
    }
    while (b)
    {
        if (b & 1)
        {
            count += 1;
        }
        b = b >> 1;
    }
    cout << count << endl;
    return 0;
}