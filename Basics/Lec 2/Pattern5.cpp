#include <bits/stdc++.h>
using namespace std;

void Pattern5(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern5(5);
    return 0;
}