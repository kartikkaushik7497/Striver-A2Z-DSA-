#include <bits/stdc++.h>
using namespace std;

void printNos(int N)
{

    if (N > 0)
    {
        cout << N << " ";
        printNos(N - 1);
    }
    return;
}
int main()
{
    int N = 20;
    printNos(N);
    return 0;
}