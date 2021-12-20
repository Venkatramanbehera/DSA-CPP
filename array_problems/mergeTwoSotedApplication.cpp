#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;
    while (i < m - 1 && j < n - 1)
    {
        if (nums1[i] > nums2[j])
        {
            i++;
        }
        else
        {
            nums1.pop_back();
            nums1.insert(nums1.begin() + i, nums2[j]);
            m++;
            j++;
        }
        cout << i << endl;
    }

    while (j < n - 1)
    {
        nums1.pop_back();
        // nums1.insert();
    }

    // cout << "Arr2 Printing" << endl;
    // for (int k : nums2)
    // {
    //     cout << k << " ";
    // }
    // cout << endl;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    int m = 6;
    vector<int> arr2 = {2, 5, 6};
    int n = 3;
    cout << arr1.size() << endl;
    merge(arr1, m, arr2, n);
    for (int i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}