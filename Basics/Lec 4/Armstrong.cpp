#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int dup = n;

    while (n > 0)
    {
        int lastNum = n % 10;
        sum += lastNum * lastNum * lastNum;
        n /= 10;
    }
    if (sum == dup)
        cout << "Armstrong";
    else
        cout << "Not An Armstrong";
    return 0;
}