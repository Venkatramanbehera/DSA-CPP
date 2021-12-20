#include <iostream>
using namespace std;

int firstOccur(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
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
    // cout << "Hello" << endl;
    int arr[6] = {1, 2, 3, 3, 3, 4};
    cout << "first occurance index" << firstOccur(arr, 6, 3) << endl;
    cout << "last occurance index" << lastOccur(arr, 6, 3) << endl;
    return 0;
}