#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numo = factorial(n);
    int deno = factorial(r) * factorial(n - r);
    return numo / deno;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
}