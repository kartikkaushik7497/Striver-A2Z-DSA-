#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Size : ";
    cin >> n;
    int arr[n];
    cout << "Input array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre calculation
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "No of queries : ";
    cin >> q;

    cout << "Enter numbers:";
    while (q--)
    {
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }

    return 0;
}