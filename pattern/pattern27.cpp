#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space >= 1)
        {
            cout << " ";
            space = space - 1;
        }
        // second tringle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        // third tringle
        int col2 = row - 1;
        while (col2 >= 1)
        {
            cout << col2;
            col2 = col2 - 1;
        }
        cout << endl;
        row = row + 1;
    }
}