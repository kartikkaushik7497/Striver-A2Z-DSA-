#include <bits/stdc++.h>
using namespace std;

int min(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
        return n2;
}

int Gcd_Brute(int n1, int n2)
{
    int gcd = 1;
    for (int i = 1; i < min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
// Time Complexity: O(min(N1, N2)) 10 times loop runs

int Gcd_Better(int n1, int n2)
{
    int gcd = 1;
    for (int i = min(n1, n2); i > 0; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
// The algorithm iterates from the minimum of N1 and N2 to 1
// Time Complexity: O(min(N1, N2)) 10 times loop runs

// Using Euclidean Algorithm
int Gcd_Optimal(int a, int b)
{
    // 52 % 10 = (2,10) 1st loop
    // 10 % 2  = (0,2)  2nd loop
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    else
        return a;
}
// TC = O(log∲min(a,b)) not a not b but -> "∲" because the the times of division is changing
// sometimes a and b so "∲" varies

int main()
{
    int n1 = 52;
    int n2 = 10;
    // cout << Gcd_Brute(n1, n2);
    // cout << Gcd_Better(n1, n2);
    cout << Gcd_Optimal(n1, n2);

    // | Method              | Time Complexity     | Example (52, 10) |
    // | ------------------- | ------------------- | ---------------- |
    // | Brute Force (loop)  | `O(min(a, b))`      | 10 iterations    |
    // | Euclidean Algorithm | `O(log(min(a, b)))` | \~2 iterations   |

    return 0;
}