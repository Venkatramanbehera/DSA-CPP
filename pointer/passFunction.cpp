#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    *p = *p + 1;
    // cout << p << endl;
}

int getSum(int *arr, int n)
{
    cout << "Size of array " << sizeof(arr) << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += arr[i];
    }
    return count;
}

int main()
{
    // int num = 5;
    // int *p = &num;

    // cout << "Before Update " << *p << endl;
    // update(p);
    // cout << "After Update " << *p << endl;
    // we can not update the reference but we can update the value of the p;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Sum is : " << getSum(arr, 5) << endl;

    return 0;
}