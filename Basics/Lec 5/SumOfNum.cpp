#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int Sum(int N)
{
    if (N > 0)
    {
        sum += N;
        Sum(N - 1);
    }
    return;
}
int main()
{
    int N = 10;
    int sum = Sum(N);
    cout << sum << endl;
    return 0;
}