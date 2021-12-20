#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(9);

    maxi.push(11);
    maxi.push(2);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(1);
    mini.push(9);

    mini.push(11);
    mini.push(2);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}