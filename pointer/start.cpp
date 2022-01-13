#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    cout << "address of num " << &num << endl;

    int *ptr = &num;
    cout << "Address is : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;

    int *pt2 = 0;
    pt2 = &num;
    cout << "Address is : " << pt2 << endl;
    cout << "Value is (before) : " << num << endl;
    (*pt2)++;
    cout << "Value is (after) : " << num << endl;

    // copying a pointer
    int *q = pt2;
    cout << *q << endl;

    cout << "before Q" << q << endl;
    q = q + 1;
    cout << "after Q" << q << endl;

    return 0;
}