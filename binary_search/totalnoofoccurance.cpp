#include <iostream>
using namespace std;

int firstOccur(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = end - 1;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = start + 1;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[6] = {1, 2, 3, 3, 3, 6};
    int fastIndex = firstOccur(arr, 6, 3);
    int lastIndex = lastOccur(arr, 6, 3);
    // cout << lastOccur(arr, 6, 3) << endl;
    int count = (lastIndex + fastIndex) / 2;

    cout << count << endl;

    return 0;
}