#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int N)
{
    int revNum = 0;
    int copy = N;
    while (N > 0)
    {
        int lastDigit = N % 10;
        N = N / 10;
        revNum = (revNum * 10) + lastDigit;
    }
    if (copy == revNum)
    {

        return true;
    }
    else
        return false;
}

int main()
{
    int N = 121;
    int x = isPalindrome(N);
    cout << x;
    return 0;
}