#include <iostream>
using namespace std;

int getMIn(int arr[], int n)
{
    int min = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int getMax(int arr[], int n)
{

    int max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int n;
    cin >> n;

    int num[100];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << "min value " << getMIn(num, n) << endl;
    cout << "max value " << getMax(num, n) << endl;
    return 0;
}