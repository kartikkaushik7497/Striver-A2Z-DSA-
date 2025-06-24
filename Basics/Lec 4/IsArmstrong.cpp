#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int N)
{
    int copy = N;
    int sum = 0;
    // Count no of digits ex. log 10(100) = 2 + 1;
    // hence 100 have 2 digits + 1
    int count = log10(N) + 1;

    while (N > 0)
    {
        int lastDigit = N % 10;
        sum += round(pow(lastDigit, count));
        N = N / 10;
    }
    if (sum == copy)
        return true;
    else
        return false;
}

int main()
{
    int N = 153;
    cout << isArmstrong(N);
    return 0;
}