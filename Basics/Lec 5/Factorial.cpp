#include <bits/stdc++.h>
using namespace std;

int Factorial_parameterised(int n, int x)
{
    if (n < 1)
    {
        return x;
    }
    else
    {
        x = x * n;
        Factorial_parameterised(n - 1, x);
    }
}

int Factorial_function(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n * Factorial_function(n - 1);
}

int main()
{
    int N = 5;
    int fact = 1;
    // cout << Factorial_parameterised(N, fact);
    cout << Factorial_function(N);
    return 0;
}