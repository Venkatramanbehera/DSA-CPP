#include <iostream>
using namespace std;

char getMaxOccurance(string s)
{
    char ch[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int number = 0;
        number = c - 'a';
        ch[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < ch[i])
        {
            ans = i;
            maxi = ch[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    string s;
    cin >> s;
    cout << getMaxOccurance(s) << endl;
    return 0;
}