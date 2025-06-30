#include <bits/stdc++.h>
using namespace std;

void nNumberSum(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        cout << endl;
        return;
    }

    nNumberSum(n - 1, sum + n);
}

int main()
{
    nNumberSum(3, 0);
    return 0;
}