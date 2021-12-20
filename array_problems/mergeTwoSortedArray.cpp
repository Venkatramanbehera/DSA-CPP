#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> mergeArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i <= arr1.size() - 1 && j <= arr2.size() - 1)
    {
        if (arr1[i] < arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
        }
        else
        {
            res.push_back(arr2[j]);
            j++;
        }
    }
    while (i <= arr1.size() - 1)
    {
        res.push_back(arr1[i]);
        i++;
    }
    while (j <= arr2.size() - 1)
    {
        res.push_back(arr2[j]);
        j++;
    }
    return res;
}

int main()
{
    vector<int> arr1 = {1, 4, 7, 9};
    vector<int> arr2 = {2, 3, 5, 8};
    vector<int> res = mergeArray(arr1, arr2);
    printArray(res);
    return 0;
}