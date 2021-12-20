#include <iostream>
using namespace std;

int main()
{
    int n, val;
    cin >> n >> val;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = val;
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}