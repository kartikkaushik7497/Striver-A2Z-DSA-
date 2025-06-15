#include <bits/stdc++.h>
using namespace std;

void prime()
{
    int n = 5;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "Is Prime" << endl;
    }
    else
        cout << "Not a Prime" << endl;
}

void prime_optimized()
{
    int n = 5;
    int count = 0;
    for (int i = 1; i * i <= n; i++) // going till square root of n
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }

    if (count == 2)
    {
        cout << "Is Prime" << endl;
    }
    else
        cout << "Not a Prime" << endl;
}

int main()
{
    prime();
    // prime_optimized();

    return 0;
}