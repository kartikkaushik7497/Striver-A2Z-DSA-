#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);

                // For sum of divisors
                // sum = sum + i;
            }
        }
        // cout << sum;
    }
    sort(v.begin(), v.end());
    for (auto itr : v) cout << itr <<" ";
}