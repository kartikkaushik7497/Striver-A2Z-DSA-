#include <bits/stdc++.h>
using namespace std;

// Optimal Approach
int reverseNum(int N)
{
    int revNum = 0;
    while (N > 0)
    {
        int lastDigit = 0;
        lastDigit = N % 10;
        revNum = (revNum * 10) + lastDigit;
        N = N / 10;
    }
    return revNum;
}

int main()
{
    int N = 123;
    int digit = CountDigits(N);
    cout << digit;
    return 0;
}