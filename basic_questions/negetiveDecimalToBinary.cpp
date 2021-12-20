#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // cout << n << endl;
    while (n != 0)
    {
        int digit = n & 1;
        cout << digit << endl;
        n = n >> 1;
    }
}