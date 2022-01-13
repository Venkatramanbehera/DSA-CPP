#include <iostream>
#include <vector>
using namespace std;

vector<int> waveArray(vector<vector<int>> arr, int mCol, int nRow)
{
    vector<int> ans;
    for (int col = 0; col < mCol; col++)
    {

        // for (int j = 0; j < 3; j++)
        // {
        //     for (int i = 0; i < 3; i++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        if (col & 1)
        {
            for (int row = nRow - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < nRow; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<int> v = waveArray(vect, 3, 3);
    // for (int t : v)
    // {
    //     cout << t << " ";
    // }

    cout << endl;

    return 0;
}