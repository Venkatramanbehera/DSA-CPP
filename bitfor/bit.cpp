#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;

    cout << "a & b " << (a & b) << endl;
    cout << "a | b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a ^ b " << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 10;
    cout << (++i) << endl;
    // 11
    cout << (i++) << endl;
    // 11 , i = 12
    cout << (--i) << endl;
    // 11, i = 11
    cout << (i--) << endl;
    // 11 , i = 10
}