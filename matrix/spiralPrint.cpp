#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> result;

    int row = arr.size();
    int col = arr[0].size();

    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;

    int count = 0;
    int res = row * col;

    while (count < res)
    {
        // starting row
        for (int i = startCol; count < res && i <= endCol; i++)
        {
            result.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;

        // ending col
        for (int i = startRow; count < res && i <= endRow; i++)
        {
            result.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;

        // ending row
        for (int i = endCol; count < res && i >= startCol; i--)
        {
            result.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        // starting col
        for (int i = endRow; count < res && i >= startRow; i--)
        {
            result.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }

    for (int j : result)
    {
        cout << j << " ";
    }
    cout << endl;
    // cout << row << " " << col << endl;
    return 0;
}