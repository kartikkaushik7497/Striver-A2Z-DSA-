#include <bits/stdc++.h>
using namespace std;

void Pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern3(5);
    return 0;
}