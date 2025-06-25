#include <bits/stdc++.h>
using namespace std;
bool isPrime_brute(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}
bool isPrime_optimal(int N)
{
    int count = 0;
    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            count++;
            if (N / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
        return true;
    else
        return false;
}
int main()
{
    int N = 11;
    // bool value = isPrime_brute(N);
    bool value = isPrime_optimal(N);
    if (value)
    {
        cout << N << " is a prime no.";
    }
    else
        cout << N << " is not a prime no.";

    return 0;
}