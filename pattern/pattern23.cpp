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
        while (col >= 1)
        {
            cout << row;
            col = col - 1;
        }
        cout << endl;
        row = row + 1;
    }
}
