// problem solving question - 1 in array

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    swapAlternate(arr, 7);
    printArray(arr, 7);
    return 0;
}