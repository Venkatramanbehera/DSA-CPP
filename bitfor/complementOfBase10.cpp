#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int digit = !(n & 1);
    //     ans = (digit * pow(10, i)) + ans;
    //     i++;
    //     n = n >> 1;
    // }

    // int result = 0;
    // int j = 0;
    // while (ans != 0)
    // {
    //     int re = ans & 1;
    //     if (re == 1)
    //     {
    //         result = result + pow(2, j);
    //         // cout << result << endl;
    //     }
    //     j++;
    //     ans = ans >> 1;
    // }
    // cout << result << endl;

    int m = n;
    int mask = 0;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int res = (~n) & mask;
    cout << res << endl;
}