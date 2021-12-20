#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int result = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n & 1;
        result = (digit * pow(10, i)) + result;
        n = n >> 1;
        i++;
    }
    cout << result << endl;
}