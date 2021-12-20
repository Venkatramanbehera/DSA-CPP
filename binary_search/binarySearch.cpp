#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int even[6] = {2, 4, 8, 10, 54, 90};
    int odd[5] = {2, 3, 4, 8, 19};
    int evenIndex = binarySearch(even, 6, 54);
    cout << "even Index " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 1);
    cout << "even Index " << oddIndex << endl;
    return 0;
}