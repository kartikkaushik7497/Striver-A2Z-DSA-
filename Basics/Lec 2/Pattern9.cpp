#include <bits/stdc++.h>
using namespace std;
// [space,star,space] = [N-i-1 , 2*i+1 , N-i-1]
// [4,1,4]
// [3,3,3]
// [2,5,2]
// [1,7,1]
// [0,9,0]
void PatternUp(int N)
{
    for (int i = 0; i < N; i++)
    {
        // 1st is N - something = to make it N - 1 = 4
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        // 2nd is twice of i+1 (2*1+1)=3 2nd row
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // 3rd is N - something = to make it N - 1 = 4
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void PatternDown(int N)
{
    for (int i = 0; i < N; i++)
    {
        // 1st is Normal loop
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // 2nd is twice of N - (2*i+1)
        for (int j = 0; j < 2 * N - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // 3rd is Normal loop
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    PatternUp(5);
    PatternDown(5);
    return 0;
}