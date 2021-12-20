#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 2, 1, 1, 3};
    int resArray[10];

    int resArrayIndex = 0;
    for (int i = 0; i < 6; i++)
    {
        int count = 0;
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            arr[j] = 0;
        }
        resArray[resArrayIndex] = count;
        resArrayIndex++;
    }
    printArray(resArray, resArrayIndex);
    return 0;
}