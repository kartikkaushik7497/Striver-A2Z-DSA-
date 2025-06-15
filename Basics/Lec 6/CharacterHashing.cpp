#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    // hash[256] for both lower and upper case & do not subract anything
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "No of queries: ";
    cin >> q;

    while (q--)
    {
        char c;
        cout << "Enter charater: ";
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << " times" << endl;
    }

    return 0;
}