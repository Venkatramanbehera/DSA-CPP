#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 3;
    int size = arr.size();
    int start = m + 1, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr);
    return 0;
}