#include <bits/stdc++.h>
using namespace std;

void Pattern10(int N)
{
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        int stars = i;
        // For 6>5 case
        if (i > N)
        {
            stars = 2 * N - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    Pattern10(5);
    return 0;
}