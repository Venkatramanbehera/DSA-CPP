#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space >= 1)
        {
            cout << " ";
            space = space - 1;
        }
        int col = n - row + 1;
        int res = row;
        while (col >= 1)
        {
            cout << res;
            res = res + 1;
            col = col - 1;
        }
        cout << endl;
        row = row + 1;
    }
}