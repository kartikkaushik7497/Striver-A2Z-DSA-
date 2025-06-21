#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
// int CountDigits(int N)
// {
//     int count = 0;
//     while (N > 0)
//     {
//         N = N / 10;
//         count = count + 1;
//     }
//     return count;
// }

// Optimal Approach
int CountDigits(int N)
{
    int count = (int)(log10(N)) + 1;
    return count;
}

int main()
{
    int N = 329823;
    int digits = CountDigits(N);
    cout << digits;
    return 0;
}