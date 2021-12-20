#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int result = 0, i = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            result = result + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << result << endl;
}