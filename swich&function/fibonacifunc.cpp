#include <iostream>
using namespace std;

int fibonaci(int n)
{
    int a = 0, b = 1, sum;
    for (int i = 0; i < n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << sum << endl;
    return sum;
}

int main()
{
    int n;
    cin >> n;
    fibonaci(n);
    return 0;
}