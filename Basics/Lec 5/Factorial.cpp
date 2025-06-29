#include <bits/stdc++.h>
using namespace std;

int Factorial(int N)
{
    if (N < 1)
    {
        return 1;
    }
    return N * Factorial(N - 1);
}

int main()
{
    cout << Factorial(5);
    return 0;
}