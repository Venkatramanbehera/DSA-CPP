#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 43, 112, 998};

    // cout << "Address of arr " << arr << endl;
    // cout << "Address of arr " << &arr << endl;
    // cout << " *arr " << *arr << endl;
    // cout << " *arr + 1 " << *arr + 1 << endl;
    // cout << " *(arr) + 1 " << *(arr) + 1 << endl;
    // cout << " *(arr + 1) " << *(arr + 1) << endl;

    // arr = arr + 1;
    int *ptr = &arr[0];
    cout << ptr << endl;

    ptr = ptr + 1;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}