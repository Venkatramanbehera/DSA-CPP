#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    cout << "Capacity - " << a.capacity() << endl;

    a.push_back(20); // push the data to the vector
    a.push_back(21);
    a.push_back(29);

    cout << "Capacity - " << a.capacity() << endl;
    cout << "Size - " << a.size() << endl;

    cout << "Data present in vector a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front - " << a.front() << endl;
    cout << "End - " << a.back() << endl;

    a.pop_back();
    cout << "Data present After pop_back" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    a.clear();
    cout << a.size() << endl;
    return 0;
}