#include <bits/stdc++.h>
using namespace std;

int *PrintDivisors(int N, int &size)
{
    int count = 0;
    int *divisors = new int[N];

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            divisors[count++] = i;
        }
    }
    size = count;
    return divisors;
}

int main()
{
    int N = 12;
    int size;
    int *divisors = PrintDivisors(N, size);
    for (int i = 0; i < size; i++)
    {
        cout << divisors[i] << " ";
    }
    return 0;
}