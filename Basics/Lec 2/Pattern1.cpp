#include <bits/stdc++.h>
using namespace std;

void Pattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    Pattern1(5);
    return 0;
}