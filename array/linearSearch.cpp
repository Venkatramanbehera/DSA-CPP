#include <iostream>
using namespace std;

bool Search(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, -1, 3, 9, 11, 45, 43, 90, 88, 15};
    int ele;
    cin >> ele;
    if (Search(arr, 10, ele))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    return 0;
}