#include <bits/stdc++.h>

using namespace std;

int countDigits(int n)
{
    // Whatever is the division either 10 or 2 take log 2 or log 10
    int count = log10(n) + 1;

    // int count = 0;
    // while (n > 0)
    // {
    //     count++;
    //     n = n / 10;
    // }
    return count;
}

// Time Complexity O(N) & U(1) for log10
// Space Complexity O(1) for both constant operations

int main()
{
    int x;
    cin >> x;
    int digits = countDigits(x);
    cout << "Number of Digits in N: " << digits << endl;
    return 0;
}
