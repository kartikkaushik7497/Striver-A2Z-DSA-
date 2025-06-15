#include <bits/stdc++.h>
using namespace std;

void printNos(int N)
{

    if (N > 0)
    {
        printNos(N - 1);
        cout << N << " ";
    }
    return;
}

int main()
{
    int N = 100;
    printNos(N);
    return 0;
}