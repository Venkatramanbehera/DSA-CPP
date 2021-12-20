#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 0;

    while (n != 0)
    {
        int rem = n % 10;

        // solution - 1
        // if (n / 10 != 0)
        // {
        //     res = (res + rem) * 10;
        // }
        // else
        // {
        //     res = res + rem;
        // }

        // solution 2
        res = (res * 10) + rem;

        n = n / 10;
    }

    cout << res << endl;
}