#include <bits/stdc++.h>
using namespace std;

void Pattern5(int N)
{
    for (int i = 0; i < N; i++)
    {
        // We want N value to everytime decrease to -1
        // Within inner loop
        for (int j = 1; j <= N - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern5(5);
    return 0;
}