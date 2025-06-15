#include <bits/stdc++.h>
using namespace std;

void Pattern2(int N)
{
    for (int i = 0; i < N; i++) // outer loop runs from 0 to N-1
    {
        // no. of columns = row number for each line here.
        
        for (int j = 1; j <= i; j++) // inner loop runs from 1 to i
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    Pattern2(5);
    return 0;
}