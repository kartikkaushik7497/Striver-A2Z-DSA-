#include <bits/stdc++.h>
using namespace std;
// [space,star,space] = [i , 2*N-(2*i+1) , i]
// [0,9,0] [i,10-(2*0+1),i]
// [1,7,1]
// [2,5,2]
// [3,3,3]
// [4,1,4]
void Pattern8(int N)
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
    Pattern8(5);
    return 0;
}