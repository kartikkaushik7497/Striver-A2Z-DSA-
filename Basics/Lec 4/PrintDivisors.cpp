#include <bits/stdc++.h>
using namespace std;

int *PrintDivisors_brute(int N, int &size)
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

// gives Unsorted array of divisors
void *PrintDivisors_optimal(int N)
{
    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
            if (N / i != i)
            {
                cout << N / i << " ";
            }
        }
    }
}

int main()
{
    int N = 12;
    int size;
    int *divisors = PrintDivisors_brute(N, size);
    for (int i = 0; i < size; i++)
    {
        cout << divisors[i] << " ";
    }
    // PrintDivisors_optimal(N);
    return 0;
}