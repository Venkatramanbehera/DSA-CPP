#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void printColSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }

        cout << sum << " ";
    }
}

int largestRowSum(int arr[][4], int row, int col)
{
    int rowSum = INT32_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > rowSum)
        {
            rowSum = sum;
            rowIndex = i;
        }
    }
    cout << "Largest Sum " << rowSum << endl;
    return rowIndex;
}

int main()
{
    int arr[3][4];
    // taking input row wise;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking input col wise
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // for output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // int target;
    // cin >> target;

    // if (isPresent(arr, target, 3, 4))
    // {
    //     cout << "Present" << endl;
    // }
    // else
    // {
    //     cout << "Not Present" << endl;
    // }

    printSum(arr, 3, 4);
    cout << endl;
    cout << "Largest Row Sum " << largestRowSum(arr, 3, 4) << endl;
    return 0;
}