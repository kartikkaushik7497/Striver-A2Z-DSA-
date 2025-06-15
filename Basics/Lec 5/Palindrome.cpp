#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    if (i > j)
        return true;
    else if (s[i] != s[j])
    {
        return false;
    }
    return isPalindrome(s, i + 1, j - 1);
}

int main()
{
    string s = "madam";
    int i = 0;
    int j = s.length() - 1;
    cout << isPalindrome(s, i, j);
    return 0;
}