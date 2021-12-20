#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(23);
    s.insert(8);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "8 is present or not ? -" << s.count(23) << endl;

    set<int>::iterator itr = s.find(23);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}