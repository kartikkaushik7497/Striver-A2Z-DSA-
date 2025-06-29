#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int N)
{
    if (N <= 1)
    {
        return N;
    }

    int last = Fibonacci(N - 1);
    int slast = Fibonacci(N - 2);

    return last + slast;
}

int main()
{
    cout << Fibonacci(5);
    return 0;
}