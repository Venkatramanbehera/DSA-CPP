#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    cout << "Elements Are" << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Elements at 1 - " << d.at(1) << endl;
    cout << "Empty or Not - " << d.empty() << endl;

    cout << "Size before erase -> " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);
    cout << "Size after erase -> " << d.size() << endl;
}