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

    // Pre computation
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate over mpp
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "No of queries : ";
    cin >> q;

    cout << "Enter numbers:";
    while (q--)
    {
        int number;
        cin >> number;
        // fetch:
        cout << mpp[number] << " ";
    }

    return 0;
}