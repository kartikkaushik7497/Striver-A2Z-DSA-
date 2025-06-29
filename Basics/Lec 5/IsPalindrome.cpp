#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, int j, string s)
{
    if (i >= j)
        return true;
    if (s[i] != s[j])
        return false;
    return isPalindrome(i + 1, j - 1, s);
}

int main()
{
    string s = "madam";
    int i = 0;
    int j = s.length() - 1;
    cout << isPalindrome(i, j, s);
    return 0;
}