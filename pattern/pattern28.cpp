#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        // 1st tringle
        int i = n - row + 1;
        int col = 1;
        while (col <= i)
        {
            cout << col;
            col = col + 1;
        }
        // 2nd tringle
        int col_two = row - 1;
        while (col_two >= 1)
        {
            cout << "*";
            col_two = col_two - 1;
        }
        // third tringle
        int col_three = row - 1;
        while (col_three >= 1)
        {
            cout << "*";
            col_three = col_three - 1;
        }
        // fourth tringle
        int col_four = n - row + 1;
        while (col_four >= 1)
        {
            cout << col_four;
            col_four = col_four - 1;
        }
        cout << endl;
        row = row + 1;
    }
}