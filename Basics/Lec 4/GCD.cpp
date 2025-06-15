#include <bits/stdc++.h>
using namespace std;

int brute_force(int N1, int N2)
{
    int gcd = 1;

    for (int i = 1; i <= min(N1, N2); i++)
    {
        if (N1 % i == 0 && N2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "The greatest common factor is : " << gcd << endl;

    // Time Complexity: O(min(N1, N2)) where N1 and N2 is the input number.
    // The algorithm iterates from 1 to the minimum of N1 and N2 and each
    // iteration checks whether both the numbers are divisible ny current no.
    // (constant time operations).
}

int better_approach(int N1, int N2)
{
    int gcd = 1;

    for (int i = min(N1, N2); i > 0; i--)
    {
        if (N1 % i == 0 && N2 % i == 0)
        {
            cout << "The greatest common factor is : " << gcd << endl;
        }
    }
    // Time Complexity: O(min(N1, N2)) where N1 and N2 is the input number.
    // The algorithm iterates from 1 to the minimum of N1 and N2 and each
    // iteration checks whether both the numbers are divisible ny current no.
    // (constant time operations).
}

// Euclidean Algorith
// gcd(20,15) = gcd(5,15) further...
// gcd(15,5) = gcd(10,5)
// gcd(10,5) = gcd(5,5)
// gcd(5,5) = gcd(0,5)
// When one of them becomes 0 other is the GCD
int optimal_approach(int N1, int N2)
{

    while (N1 > 0 && N2 > 0)
    {
        if (N1 > N2)
            N1 = N1 % N2;
        else
            N2 = N2 % N1;
    }
    if (N1 == 0)
        cout << "The greatest common factor is : " << N2 << endl;
    else
        cout << "The greatest common factor is : " << N1 << endl;
    // Whenever there is division happening in time complexity
    // Then the no. of iterations will be in terms of log
    // Due to changing results of division between N1 and N2
    // Time complexity is in φ
    // Time Complexity: O(logφ min(N1, N2))
}

int main()
{
    int N1, N2;
    N1 = 20;
    N2 = 15;
    // brute_force(20, 40);
    // better_approach(20, 40);
    optimal_approach(20, 15);
    return 0;
}