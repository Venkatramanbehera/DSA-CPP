#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "love";
    m[2] = "baber";
    m[3] = "surju";

    m.insert({5, "Bheem"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    m.erase(1);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(3);
    // cout << *it << endl;
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
    return 0;
}