#include <iostream>
using namespace std;

// void update(int a)
// {
//     a = a / 2;
// }

int update(int a)
{
    // a -= 5;
    int ans = a * a;
    return ans;
}

int main()
{
    int a = 10;
    a = update(a);
    cout << a << endl;
}