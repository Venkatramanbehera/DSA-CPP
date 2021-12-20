#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char res = ch - 'A' + 'a';
        return res;
    }
}

bool checkPalindrome(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

void reverse(char arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin >> name;
    cout << name << endl;
    int len = getLength(name);
    cout << "Length of name " << len << endl;
    reverse(name, len);
    cout << name << endl;
    cout << " Is Palindrome " << checkPalindrome(name, len) << endl;
    cout << "To Lowercase " << toLowerCase('A') << endl;
    return 0;
}